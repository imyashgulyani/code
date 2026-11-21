import java.util.*;
public class simple{
    static Scanner ob=new Scanner(System.in);
    static void add(int a,int b)
    {
        System.out.println("sum of number is ="+(a+b));
    }
    static void subtract(int a,int b)
    {
        System.out.println("subtract of number is ="+(a-b));

    }
    static void multiply(int a,int b)
    {
        System.out.println("multiply of number is ="+(a*b));

    }
    static void divide(int a,int b)
    {
        if(b==0)
        {
            System.out.println("cannot divide");
        }
        else
        {
            System.out.println("division of number is ="+(a/b));
        }

    }
    public static void main(String[] args)
    {
        int a,b;
        int d=0;
        System.out.print("enter first number");
        a=ob.nextInt();
        System.out.print("eneter second number");
        b=ob.nextInt();
        while(d!=5)
        {
            int c;
            System.out.println("enter 1 for addition");
            System.out.println("enter 2 for subtraction");
            System.out.println("enter 3 for multiplication");
            System.out.println("enter 4 for division");
            System.out.print("enter 5 to exit");
            c=ob.nextInt();
            switch(c)
            {
                case 1:
                    {
                        add(a,b);
                        break;
                    }
                case 2:
                    {
                        subtract(a,b);
                        break;
                    }
                case 3:
                    {
                        multiply(a,b);
                        break;
                    }
                case 4:
                    {
                        divide(a,b);
                        break;
                    } 
                case 5:
                    {
                        d=5;
                        break;
                    }
                default:
                    {
                        System.out.print("invalid choice");
                    }
            }
        }
    }
}