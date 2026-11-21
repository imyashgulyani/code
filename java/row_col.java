import java.util.Scanner;

public class row_col {
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
            }
        }
    }
    static void add_row(int a[][],int r)
    {
        int i,j;
        int sum1=0;
        int sum2=0;
        for(i=0;i<r;i++)
        {
            for(j=0;j<r;j++)
            {
                if(i==0 || i==r-1)
                {
                    sum1=sum1+a[i][j];
                }
                if(j==0 || j==r-1)
                {
                    sum2=sum2+a[i][j];
                }
            }
        }
        System.out.println("sum is="+sum1);
        System.out.println("sum is="+sum2);
    }
    public static void main(String[] args)
    {
        int a[][],r;
        System.out.print("enter total number of rows in matrix :");
        r=ob.nextInt();
        a=new int[r][r];
        input(a,r);
        add_row(a,r);
    }

}
