import java.util.*;
public class palindrome {
    static Scanner ob=new Scanner(System.in);
    static void input(int a[],int n)
    {
        int i;
        for(i=0;i<n;i++)
        {
            a[i]=ob.nextInt();
        }
    }
    static int palind(int num)
    {
        int b,c=0;
        while(num!=0)
        {
            b=num%10;
            c=c*10+b;
            num=num/10;
        }
        return c;
    }
    public static void main(String[] args)
    {
        int a[],n,count=0;
        System.out.print("enter size of array");
        n=ob.nextInt();
        a=new int[n];
        System.out.print("enter number in array");
        input(a,n);
        System.out.println("Palindrome nos are");
        for(int i=0;i<n;i++)
        {
            if(palind(a[i])==a[i])
            {
                System.out.println(a[i]);
                count++;
            }
        }
        System.out.println("Total palindrom nos are "+count);
    }
}
