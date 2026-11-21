import java.util.*;
public class matrix_mul {
    static Scanner ob=new Scanner(System.in);
    static void input(int a[][],int n)
    {
        System.out.print("enter number in matrix");
        int i,j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                a[i][j]=ob.nextInt();
            }
        }
    }
    static void multiplication(int a[][],int b[][],int c[][],int n)
    {
        int i,j,k;
        for(k=0;k<n;k++)
        {
            for(i=0;i<n;i++)
            {
                int sum=0;
                for(j=0;j<n;j++)
                {
                    sum=sum+a[k][j]*b[j][i];
                }
                c[k][i]=sum;
            }
        }
    }
    static void display(int a[][],int n)
    {
        int i,j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                System.out.print(a[i][j]+"\t");
            }
            System.out.println();
        }

    }
    public static void main(String[] args)
    {
        int n;
        System.out.print("enter number of rows in matrix");
        n=ob.nextInt();
        int [][]a=new int[n][n];
        int [][]b=new int[n][n];
        int [][]c=new int[n][n];
        input(a,n);
        input(b,n);
        multiplication(a,b,c,n);
        display(c,n);
    }
}
