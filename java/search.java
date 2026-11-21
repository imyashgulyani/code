import java.util.*;
public class search {
    static Scanner ob=new Scanner(System.in);
    static void input(int a[],int n)
    {
        int i;
        for(i=0;i<n;i++)
        {
            a[i]=ob.nextInt();
        }
    }
    static int search(int a[],int b,int n)
    {
        int i;
        for(i=0;i<n;i++)
        {
            if(a[i]==b)
            {
               return i;
            }
        }
        return -1;
    }
    public static void main(String[] args)
    {
        int a[],n;
        int b;
        System.out.print("enter size of array");
        n=ob.nextInt();
        a=new int[n];
        System.out.print("enter number in array");
        input(a,n);
        System.out.print("enter number to be searched");
        b=ob.nextInt();
        int i=search(a,b,n);
        if(i!=-1)
        {
            System.out.printf("Element found at %d Position",i+1);
        }
        else
        {
            System.out.print("Element not found");
        }
    }
}
