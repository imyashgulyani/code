import java.util.Scanner;

public class addmat {
    static Scanner ob=new Scanner(System.in);
    static void input(int x[][],int r)
    {
        int i,j;
        System.out.print("enter number in array 1");
        for(i=0;i<r;i++)
        {
            for(j=0;j<r;j++)
            {
                x[i][j]=ob.nextInt();
            }
        }
    }
    static int[][] add(int a[][],int b[][],int r)
    {
        int i,j;
        int c[][];
        c=new int[r][r];
        for(i=0;i<r;i++)
        {
            for(j=0;j<r;j++)
            {
                c[i][j]=a[i][j]+b[i][j];
            }
        }
        return c;
    }
    static void display(int x[][],int r)
    {
        int i,j;
        for(i=0;i<r;i++)
        {
            for(j=0;j<r;j++)
            {
                System.out.print(x[i][j]+"\t");
            }
            System.out.println();
        }
    }
    public static void main(String[] args)
    {
        int a[][],b[][],r;
        System.out.print("enter total number of rows in matrix :");
        r=ob.nextInt();
        a=new int[r][r];
        b=new int[r][r];
        System.out.println("enter values in a :");
        input(a,r);
        System.out.println("enter values in b :");
        input(b,r);
              
        int d[][]=add(a,b,r);
        System.out.println("matrix A is");
        display(a,r);
        System.out.println("matrix B is");
        display(b,r);
        System.out.println("matrix C is");
        display(d,r);
    }
}
