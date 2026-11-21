import java.util.*;
public class prime {
    static Scanner ob=new Scanner(System.in); 
    static void input(int a[],int n)
    {
        int i;
        for(i=0;i<n;i++)
        {
            a[i]=ob.nextInt();
        }
    }
    static boolean prime(int a)
    {
        int i;
        for(i=2;i<=a/2;i++)
        {
            if(a%i==0)
            {
                return false; 
            }
        }
        return true;

    }
    public static void main(String[] args)
    {
        int count=0;
        int a[],n;
        System.out.print("enter size of array");
        n=ob.nextInt();
        a=new int[n];
        System.out.print("enter number in arrays");
        input(a,n);
        int i;
        for(i=0;i<n;i++)
        {
            if(prime(a[i]))
            {
                count++;
            }
        }
        System.out.print("total number of prime number in array is ="+count);

    }
}
