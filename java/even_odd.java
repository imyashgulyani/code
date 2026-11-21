import java.util.*;
public class even_odd {
    static Scanner ob=new Scanner(System.in);
    static void input(int a[],int n)
    {
        int i;
        for(i=0;i<n;i++)
        {
            a[i]=ob.nextInt();
        }

    }
    static void evenodd(int a[],int n)
    {
        int sum_even=0,sum_odd=0;
        int i;
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                sum_even=sum_even+a[i];
            }
            else
            {
                sum_odd=sum_odd+a[i];
            }
        }
        System.out.print("sum of even number is ="+sum_even);
        System.out.print("sum of odd number is ="+sum_odd);
    }
    public static void main(String[] args)
    {
        int a[],n;
        System.out.print("enter size of arrays");
        n=ob.nextInt();
        System.out.print("enter number in arrays");
        a=new int[n];
        input(a,n);
        evenodd(a,n);
    }
}
