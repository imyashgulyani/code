import java.util.ArrayList;
import java.util.Scanner;

class Item {
    private int id;
    private String name;
    private double price;

    public Item(int id, String name, double price) {
        this.id = id;
        this.name = name;
        this.price = price;
    }

    public int getId() {
        return id;
    }

    public String getName() {
        return name;
    }

    public double getPrice() {
        return price;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setPrice(double price) {
        this.price = price;
    }

    public String getDetails() {
        return "ID: " + id + " | Name: " + name + " | Price: Rs." + String.format("%.2f", price);
    }
}

class Electronic extends Item {
    private int warrantyMonths;

    public Electronic(int id, String name, double price, int warrantyMonths) {
        super(id, name, price);
        this.warrantyMonths = warrantyMonths;
    }

    public int getWarrantyMonths() {
        return warrantyMonths;
    }

    public void setWarrantyMonths(int warrantyMonths) {
        this.warrantyMonths = warrantyMonths;
    }

    @Override
    public String getDetails() {
        return super.getDetails() + " | Warranty: " + warrantyMonths + " months";
    }
}

class Accessory extends Item {
    private String compatibility;

    public Accessory(int id, String name, double price, String compatibility) {
        super(id, name, price);
        this.compatibility = compatibility;
    }

    public String getCompatibility() {
        return compatibility;
    }

    public void setCompatibility(String compatibility) {
        this.compatibility = compatibility;
    }

    @Override
    public String getDetails() {
        return super.getDetails() + " | Compatible with: " + compatibility;
    }
}

class Store {
    private ArrayList<Item> items = new ArrayList<>();

    public void addItem(Item item) {
        if (item == null)
            throw new IllegalArgumentException("Item cannot be null.");
        if (findItem(item.getId()) != null)
            throw new IllegalArgumentException("ID already exists.");
        items.add(item);
    }

    public boolean removeItem(int id) {
        Item item = findItem(id);
        if (item != null) {
            items.remove(item);
            return true;
        }
        return false;
    }

    public Item findItem(int id) {
        for (Item item : items) {
            if (item.getId() == id)
                return item;
        }
        return null;
    }

    public ArrayList<Item> search(String keyword) {
        ArrayList<Item> result = new ArrayList<>();
        for (Item item : items) {
            if (item.getName().toLowerCase().contains(keyword.toLowerCase()))
                result.add(item);
        }
        return result;
    }

    public void listItems() {
        if (items.isEmpty()) {
            System.out.println("Inventory is empty.");
            return;
        }
        for (Item item : items)
            System.out.println(item.getDetails());
    }
}

public class TechStoreApp {
    static Scanner sc = new Scanner(System.in);
    static Store store = new Store();

    public static void main(String[] args) {
        store.addItem(new Electronic(101, "Laptop", 75000, 24));
        store.addItem(new Electronic(102, "Smartphone", 45000, 12));
        store.addItem(new Accessory(103, "Wireless Mouse", 1200, "Windows/Mac"));
        store.addItem(new Accessory(104, "USB-C Cable", 600, "USB-C Devices"));

        while (true) {
            System.out.println("\n--- TechStore ---");
            System.out.println("1. Add Item");
            System.out.println("2. Remove Item");
            System.out.println("3. List Items");
            System.out.println("4. Search Items");
            System.out.println("5. Exit");

            int choice = readInt("Enter choice: ");

            switch (choice) {
                case 1:
                    addItem();
                    break;
                case 2:
                    removeItem();
                    break;
                case 3:
                    store.listItems();
                    break;
                case 4:
                    searchItems();
                    break;
                case 5:
                    System.out.println("Thank you for using TechStore.");
                    return;
                default:
                    System.out.println("Invalid choice.");
            }
        }
    }

    static void addItem() {
        try {
            int type = readInt("1. Electronic  2. Accessory: ");
            int id = readInt("Enter ID: ");

            System.out.print("Enter name: ");
            String name = sc.nextLine();

            double price = readDouble("Enter price: ");

            if (price < 0)
                throw new IllegalArgumentException("Price cannot be negative.");

            if (type == 1) {
                int warranty = readInt("Enter warranty in months: ");
                store.addItem(new Electronic(id, name, price, warranty));
            } else if (type == 2) {
                System.out.print("Enter compatibility: ");
                String compatibility = sc.nextLine();
                store.addItem(new Accessory(id, name, price, compatibility));
            } else {
                System.out.println("Invalid item type.");
                return;
            }

            System.out.println("Item added successfully.");
        } catch (IllegalArgumentException e) {
            System.out.println("Error: " + e.getMessage());
        }
    }

    static void removeItem() {
        int id = readInt("Enter ID to remove: ");

        if (store.removeItem(id))
            System.out.println("Item removed successfully.");
        else
            System.out.println("Item not found.");
    }

    static void searchItems() {
        System.out.print("Enter search keyword: ");
        String keyword = sc.nextLine();

        ArrayList<Item> result = store.search(keyword);

        if (result.isEmpty()) {
            System.out.println("No items found.");
            return;
        }

        for (Item item : result)
            System.out.println(item.getDetails());
    }

    static int readInt(String message) {
        while (true) {
            System.out.print(message);
            try {
                return Integer.parseInt(sc.nextLine());
            } catch (NumberFormatException e) {
                System.out.println("Enter a valid integer.");
            }
        }
    }

    static double readDouble(String message) {
        while (true) {
            System.out.print(message);
            try {
                return Double.parseDouble(sc.nextLine());
            } catch (NumberFormatException e) {
                System.out.println("Enter a valid number.");
            }
        }
    }
}