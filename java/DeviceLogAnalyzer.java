import java.time.LocalDateTime;
import java.time.format.DateTimeParseException;
import java.util.*;

class InvalidRecordException extends Exception {
    public InvalidRecordException(String message) {
        super(message);
    }
}

class DeviceRecord {
    private final String deviceId;
    private final LocalDateTime timestamp;
    private final int statusCode;
    private final String message;

    public DeviceRecord(String deviceId, LocalDateTime timestamp, int statusCode, String message)
            throws InvalidRecordException {

        if (deviceId == null || deviceId.trim().isEmpty())
            throw new InvalidRecordException("Device ID cannot be empty");

        if (timestamp == null)
            throw new InvalidRecordException("Timestamp cannot be null");

        if (statusCode < 100 || statusCode > 599)
            throw new InvalidRecordException("Invalid status code: " + statusCode);

        if (message == null || message.trim().isEmpty())
            throw new InvalidRecordException("Message cannot be empty");

        this.deviceId = deviceId.trim();
        this.timestamp = timestamp;
        this.statusCode = statusCode;
        this.message = message.trim();
    }

    public String getDeviceId() {
        return deviceId;
    }

    public LocalDateTime getTimestamp() {
        return timestamp;
    }

    public int getStatusCode() {
        return statusCode;
    }

    public String getMessage() {
        return message;
    }

    @Override
    public String toString() {
        return deviceId + " | " + timestamp + " | " + statusCode + " | " + message;
    }
}

class LogParser {

    public DeviceRecord parseFromCsvLine(String line) throws InvalidRecordException {
        if (line == null || line.trim().isEmpty())
            throw new InvalidRecordException("Empty record");

        String[] fields = line.split(",", -1);

        if (fields.length != 4)
            throw new InvalidRecordException("Expected 4 fields: " + line);

        for (int i = 0; i < fields.length; i++) {
            fields[i] = fields[i].trim();
            if (fields[i].isEmpty())
                throw new InvalidRecordException("Field " + (i + 1) + " is empty");
        }

        LocalDateTime timestamp;

        try {
            timestamp = LocalDateTime.parse(fields[1]);
        } catch (DateTimeParseException e) {
            throw new InvalidRecordException("Invalid timestamp: " + fields[1]);
        }

        int statusCode;

        try {
            statusCode = Integer.parseInt(fields[2]);
        } catch (NumberFormatException e) {
            throw new InvalidRecordException("Invalid status code: " + fields[2]);
        }

        return new DeviceRecord(fields[0], timestamp, statusCode, fields[3]);
    }

    public DeviceRecord parseFromMap(Map<String, String> data) throws InvalidRecordException {
        if (data == null)
            throw new InvalidRecordException("Record map cannot be null");

        String[] required = {"deviceId", "timestamp", "statusCode", "message"};

        for (String key : required) {
            if (!data.containsKey(key) || data.get(key) == null || data.get(key).trim().isEmpty())
                throw new InvalidRecordException("Missing field: " + key);
        }

        LocalDateTime timestamp;

        try {
            timestamp = LocalDateTime.parse(data.get("timestamp").trim());
        } catch (DateTimeParseException e) {
            throw new InvalidRecordException("Invalid timestamp: " + data.get("timestamp"));
        }

        int statusCode;

        try {
            statusCode = Integer.parseInt(data.get("statusCode").trim());
        } catch (NumberFormatException e) {
            throw new InvalidRecordException("Invalid status code: " + data.get("statusCode"));
        }

        return new DeviceRecord(
                data.get("deviceId"),
                timestamp,
                statusCode,
                data.get("message")
        );
    }
}

class Analyzer {
    private final List<DeviceRecord> records;

    public Analyzer(List<DeviceRecord> records) {
        this.records = records;
    }

    public void listAllRecords() {
        System.out.println("\n--- All Records ---");

        if (records.isEmpty()) {
            System.out.println("No valid records available.");
            return;
        }

        for (DeviceRecord record : records) {
            System.out.println(record);
        }
    }

    public void countByStatusCode() {
        System.out.println("\n--- Records By Status Code ---");

        Map<Integer, Integer> counts = new TreeMap<>();

        for (DeviceRecord record : records) {
            int code = record.getStatusCode();
            counts.put(code, counts.getOrDefault(code, 0) + 1);
        }

        if (counts.isEmpty()) {
            System.out.println("No valid records available.");
            return;
        }

        for (Map.Entry<Integer, Integer> entry : counts.entrySet()) {
            System.out.println(entry.getKey() + " : " + entry.getValue());
        }
    }

    public void findByDeviceId(String deviceId) {
        System.out.println("\n--- Records For " + deviceId + " ---");

        boolean found = false;

        for (int i = 0; i < records.size(); i++) {
            DeviceRecord record = records.get(i);

            if (record.getDeviceId().equalsIgnoreCase(deviceId.trim())) {
                System.out.println(record);
                found = true;
            }
        }

        if (!found)
            System.out.println("No records found for device: " + deviceId);
    }

    public void showStatistics() {
        System.out.println("\n--- Statistics ---");

        if (records.isEmpty()) {
            System.out.println("No valid records available.");
            return;
        }

        LocalDateTime earliest = records.get(0).getTimestamp();
        LocalDateTime latest = records.get(0).getTimestamp();

        int index = 0;

        while (index < records.size()) {
            LocalDateTime current = records.get(index).getTimestamp();

            if (current.isBefore(earliest))
                earliest = current;

            if (current.isAfter(latest))
                latest = current;

            index++;
        }

        System.out.println("Total valid records: " + records.size());
        System.out.println("Earliest timestamp: " + earliest);
        System.out.println("Latest timestamp: " + latest);
    }

    public void menuOperation(int choice, Scanner scanner) {
        switch (choice) {
            case 1:
                listAllRecords();
                break;

            case 2:
                countByStatusCode();
                break;

            case 3:
                System.out.print("Enter device ID: ");
                String deviceId = scanner.nextLine();
                findByDeviceId(deviceId);
                break;

            case 4:
                showStatistics();
                break;

            case 5:
                System.out.println("Exiting Device Log Analyzer...");
                break;

            default:
                System.out.println("Invalid menu choice.");
        }
    }
}

public class DeviceLogAnalyzer {

    private static final String[] SAMPLE_DATA = {
            "DEV001,2026-09-01T08:30:00,200,Device started successfully",
            "DEV002,2026-09-01T09:15:00,404,Sensor not found",
            "DEV003,2026-09-01T10:00:00,200,Connection established",
            "DEV001,2026-09-01T11:20:00,500,Internal device error",
            "DEV004,2026-09-02T08:10:00,201,Device registered",
            "DEV002,2026-09-02T09:45:00,200,Sensor connected",
            "DEV005,2026-09-02T12:30:00,403,Access denied",
            "DEV003,2026-09-03T13:00:00,200,Data transmission successful",
            "DEV001,2026-09-03T15:40:00,404,Configuration missing",
            "DEV006,2026-09-04T07:25:00,201,Device activated",
            "DEV004,2026-09-04T16:10:00,500,Hardware failure",
            "DEV005,2026-09-05T18:00:00,200,Operation completed",
            "DEV007,INVALID_DATE,200,Bad timestamp",
            "DEV008,2026-09-06T10:30:00,INVALID,Invalid status code"
    };

    private static List<DeviceRecord> loadRecords() {
        LogParser parser = new LogParser();
        List<DeviceRecord> records = new ArrayList<>();

        for (String line : SAMPLE_DATA) {
            try {
                records.add(parser.parseFromCsvLine(line));
            } catch (InvalidRecordException e) {
                System.out.println("Skipped malformed record: " + e.getMessage());
            }
        }

        return records;
    }

    private static void demonstrateMapParsing() {
        LogParser parser = new LogParser();

        Map<String, String> map = new HashMap<>();
        map.put("deviceId", "DEV009");
        map.put("timestamp", "2026-09-07T09:00:00");
        map.put("statusCode", "200");
        map.put("message", "Map record loaded");

        try {
            DeviceRecord record = parser.parseFromMap(map);
            System.out.println("Map parsing successful: " + record);
        } catch (InvalidRecordException e) {
            System.out.println("Map parsing error: " + e.getMessage());
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        try {
            System.out.println("=== Device Log Analyzer ===");
            System.out.println("Loading sample records...\n");

            List<DeviceRecord> records = loadRecords();

            System.out.println("\nValid records loaded: " + records.size());

            demonstrateMapParsing();

            Analyzer analyzer = new Analyzer(records);

            boolean running = true;

            while (running) {
                System.out.println("\n=== Menu ===");
                System.out.println("1. List all records");
                System.out.println("2. Count records by status code");
                System.out.println("3. Find records for a device ID");
                System.out.println("4. Show statistics");
                System.out.println("5. Exit");
                System.out.print("Enter choice: ");

                String input = scanner.nextLine();

                try {
                    int choice = Integer.parseInt(input);

                    analyzer.menuOperation(choice, scanner);

                    if (choice == 5)
                        running = false;

                } catch (NumberFormatException e) {
                    System.out.println("Please enter a valid numeric choice.");
                }
            }

        } catch (Exception e) {
            System.out.println("Application error: " + e.getMessage());
        } finally {
            scanner.close();
            System.out.println("Resources closed.");
        }
    }
}