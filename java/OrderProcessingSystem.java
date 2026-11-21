package college_work.classwork;

import java.util.Scanner;

class Order {
    String id, city;
    double amount;
    int pin;

    Order(String id, double amount, String city, int pin) {
        this.id = id;
        this.amount = amount;
        this.city = city;
        this.pin = pin;
    }

    double bill() {
        return amount + amount * 0.05;
    }

    void display() {
        System.out.println("\n--- Order Summary ---");
        System.out.println("Order ID: " + id);
        System.out.println("City: " + city);
        System.out.printf("Final Bill: %.2f\n", bill());
    }
}

class PremiumOrder extends Order {
    double discount;

    PremiumOrder(String id, double amount, String city, int pin, double discount) {
        super(id, amount, city, pin);
        this.discount = discount;
    }

    @Override
    double bill() {
        double newAmount = amount - amount * discount / 100;
        return newAmount + newAmount * 0.05;
    }

    @Override
    void display() {
        if (pin < 100000 || pin > 999999) {
            System.out.println("Invalid Pin Code.");
            return;
        }

        super.display();
        System.out.println("Discount: " + discount + "%");
    }
}

public class OrderProcessingSystem {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Order ID: ");
        String id = sc.nextLine();

        System.out.print("Base Amount: ");
        double amount = sc.nextDouble();
        sc.nextLine();

        System.out.print("City: ");
        String city = sc.nextLine();

        System.out.print("Pin Code: ");
        int pin = sc.nextInt();

        System.out.print("Discount (%): ");
        double discount = sc.nextDouble();

        PremiumOrder order =
                new PremiumOrder(id, amount, city, pin, discount);

        order.display();

        sc.close();
    }
}
