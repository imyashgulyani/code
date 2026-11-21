import java.util.*;
public class simple_sort {
    public static void main(String[] args)
    {
        int n;
        Scanner ob=new Scanner(System.in);
        System.out.print("enter size of array");
        n=ob.nextInt();
        int[] a=new int[n];
        int i,j;
        for(i=0;i<n;i++)
        {
            a[i]=ob.nextInt();
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    int t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                }
            }  
        }
        for(i=0;i<n;i++)
        {
            System.out.println(a[i]);
        }
    }
}
