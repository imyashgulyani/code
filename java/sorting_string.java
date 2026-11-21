import java.util.*;
public class sorting_string {
    public static void main(String [] args)
    {
        int n;
        Scanner ob=new Scanner(System.in);
        System.out.print("enter size of string");
        n=ob.nextInt();
        String [] a=new String[n];
        input(n,a,ob);
        a=check(a,n);
        display(a,n);
    }
    public static void input(int n,String[] a,Scanner ob)
    {
        int i;
        ob.nextLine();
        for(i=0;i<n;i++)
        {
            System.out.print("Enter string : ");
            a[i]=ob.nextLine();
            
        }
    }
    public static void display(String[] a,int n)
    {
        System.out.println("display of sorted array is ");
        int i;
        for(i=0;i<n;i++)
        {
            System.out.println(a[i]);
        }
    }
    public  static String[] check(String []a,int n)
    {
        int i,j;
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i].compareTo(a[j])>0)
                {
                    String s=a[i];
                    a[i]=a[j];
                    a[j]=s;
                }
            }
        }
        return a;
    }
}
