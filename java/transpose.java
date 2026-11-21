import java.util.Scanner;
public class transpose {
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
    static void transpose(int a[][],int r)
    {
        int i,j;
        System.out.println("original matrix is");
        for(i=0;i<r;i++)
        {
            for(j=0;j<r;j++)
            {
                System.out.print(a[i][j]+"\t");
            }
            System.out.println();
        }
        int temp;
        for(i=0;i<r;i++)
        {
            for(j=i+1;j<r;j++)
            {
                temp=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=temp;
            }
        }
        System.out.println("transpose of matrix is");
        for(i=0;i<r;i++)
        {
            for(j=0;j<r;j++)
            {
                System.out.print(a[i][j]+"\t");
            }
            System.out.println();
        }
    }
    public static void main(String[] args)
    {
        int a[][],r;
        System.out.print("enter total number of rows in matrix :");
        r=ob.nextInt();
        a=new int[r][r];
        input(a,r);
        transpose(a,r);
    }
}
