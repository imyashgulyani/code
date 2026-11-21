import java.util.Scanner;

public class staticadd {
    static int a,b,c;
    static Scanner ob=new Scanner(System.in);
    static void input()
    {
            System.out.print("enter two numbers");
            a=ob.nextInt();
            b=ob.nextInt();
    }
    static void sum()
    {
        c=a+b;
    }
    static void display()
    {
        System.out.print("addition is ="+c);
    }
    public static void main(String[] args)
    {
        input();
        sum();
        display();
    }
}

