public class student_data {
    public static void main(String[] args) {
        int rollNumber = 20260142;
        long mobileNumber = 9876543210L;
        double cgpa = 9.15; 
        float attendance = 88.5f; 
        char section = 'A'; 
        boolean isHosteller = true; 
        short admissionYear = 2026; 
        byte semester = 3; 
        System.out.println("Student Profile");
        System.out.println("Admission Year: " + admissionYear);
        System.out.println("Semester: " + semester);
        System.out.println("Roll Number: " + rollNumber);
        System.out.println("Section: " + section);
        System.out.println("Mobile Number: " + mobileNumber);
        System.out.println("CGPA: " + cgpa);
        System.out.println("Attendance: " + attendance + "%");
        System.out.println("Hosteller Status: " + isHosteller);
    }
}
