import java.util.*;
public class input {
    static Scanner ob=new Scanner(System.in);
    static void input(int x[],int n)
    {
        int i;
        for(i=0;i<n;i++)
        {
            x[i]=ob.nextInt();
        }
    }
    static void addition(int x[],int n)
    {
        int i;
        int sum=0;
        for(i=0;i<n;i++)
        {
            sum=sum+x[i];
        }
        System.out.print("addition ="+sum);
    }
    public static void main(String[] args)
    {
        int a[],n;
        System.out.print("enter size of arrays");
        n=ob.nextInt();
        a=new int[n];
        System.out.print("enter number in array");
        input(a,n);
        addition(a,n);
    }
}
