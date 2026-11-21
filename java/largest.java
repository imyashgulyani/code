import java.util.*;
public class largest {
    static Scanner ob=new Scanner(System.in);
    static void input(int a[],int n)
    {
        int i;
        for(i=0;i<n;i++)
        {
            a[i]=ob.nextInt();
        }
    }
    static void larg(int a[],int n)
    {
        int i;
        int max=a[0],min=a[0];
        for(i=0;i<n;i++)
        {
            if(a[i]>max)
            {
                max=a[i];
            }
            else if(a[i]<min)
            {
                min=a[i];
                
            }
        }
        System.out.print("largest number in array is = "+max);
        System.out.print("smallest number in array is = "+min);
    }
    public static void main(String[] args)
    {
        int a[],n;
        System.out.print("enter size of array");
        n=ob.nextInt();
        a=new int[n];
        System.out.print("enter number in array");
        input(a,n);
        larg(a,n);
    }
}
