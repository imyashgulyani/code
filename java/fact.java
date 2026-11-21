import java.util.*;
public class fact {
    static Scanner ob=new Scanner(System.in);
    static void input(int a[],int n)
    {
        int i;
        for(i=0;i<n;i++)
        {
            a[i]=ob.nextInt();
        }
    }
    static int factorial(int a)
    {
        int b=1;
        while(a>1)
        {
            b=b*a;
            a--;
        }
        return b;
    }
    public static void main(String[] args)
    {
        int a[],n;
        System.out.print("enter size of array");
        n=ob.nextInt();
        a=new int[n];
        System.out.print("enter number in arrays");
        input(a,n);
        int i;
        for(i=0;i<n;i++)
        {
            System.out.print(a[i]+"="+factorial(a[i]));
            System.out.println();
        }

    }
}
