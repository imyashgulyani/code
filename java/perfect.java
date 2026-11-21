import java.util.*;
public class perfect {
    static Scanner ob=new Scanner(System.in);
    static int perfect_num(int a)
    {
        int b;
        int sum=0;
        while(a>0)
        {
            b=a%10;
            sum=sum+fact(b);
            a=a/10;
        }
        return sum;
    }
    static int fact(int a)
    {
        int product=1;
        while(a>0)
        {
            product=product*a;
            a--;
        }
        return product;
    }
    public static void main(String [] args)
    {
        int a;
        int b;
        System.out.print("enter number");
        a=ob.nextInt();
        b=perfect_num(a);
        if(b==a)
        {
            System.out.print("it is perfect number");
        }
        else{
            System.out.print("it is not a perfect number");
        }
    }
}
