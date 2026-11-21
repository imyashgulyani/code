import java.util.*;
public class add_mat
{
    static Scanner ob=new Scanner(System.in);
    static void input(int a[][],int r)
    {
        int i,j;
        System.out.print("enter number in arrays");
        for(i=0;i<r;i++)
        {
            for(j=0;j<r;j++)
            {
                a[i][j]=ob.nextInt();
                System.out.println();
            }
        }
    }
    static void add(int a[][],int r)
    {
        int i,j;
        int sum=0;
        for(i=0;i<r;i++)
        {
            for(j=0;j<r;j++)
            {
                if(i+j>=r-1)
                {
                    sum=sum+a[i][j];
                }
            }
        }
        System.out.println("sum is="+sum);
    }
    public static void main(String[] args)
    {
        int a[][],r;
        System.out.print("enter total number of rows in matrix :");
        r=ob.nextInt();
        a=new int[r][r];
        input(a,r);
        add(a,r);
    }

}