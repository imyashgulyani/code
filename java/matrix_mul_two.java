import java.util.Scanner;
public class matrix_mul_two {
    static Scanner ob=new Scanner(System.in);
    static void input(int a[][],int x,int y)
    {
        System.out.print("enter number in matrix 1");
        int i,j;
        for(i=0;i<x;i++)
        {
            for(j=0;j<y;j++)
            {
                a[i][j]=ob.nextInt();
            }
        }
    }
    static void multiplication(int a[][],int b[][],int c[][],int m,int n,int p)
    {
        int i,j,k;
        for(k=0;k<m;k++)
        {
            for(i=0;i<p;i++)
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
    static void display(int a[][],int m,int p)
    {
        int i,j;
        for(i=0;i<m;i++)
        {
            for(j=0;j<p;j++)
            {
                System.out.print(a[i][j]+"\t");
            }
            System.out.println();
        }

    }
    public static void main(String[] args)
    {
        int m,n,p;
        System.out.print("enter number of rows in matrix 1");
        m=ob.nextInt();
        System.out.print("enter number of column for both matrix");
        n=ob.nextInt();
        System.out.print("enter number of rows in matrix 2");
        p=ob.nextInt();
        int [][]a=new int[m][n];
        int [][]b=new int[n][p];
        int [][]c=new int[m][p];
        input(a,m,n);
        input(b,n,p);
        multiplication(a,b,c,m,n,p);
        display(c,m,p);
    }
}