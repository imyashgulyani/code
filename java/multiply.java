import java.util.Scanner;
public class multiply {
    static Scanner ob=new Scanner(System.in);
    static void multiply(int a[][])
    {
        int i,j;
        for(i=0;i<10;i++)
        {
            for(j=0;j<10;j++)
            {
                a[i][j]=(i+2)*(j+1);
            }
            System.out.println();
        }
    }
    static void display(int a[][])
    {
        int i,j;
        for(i=0;i<10;i++)
        {
            for(j=0;j<10;j++)
            {
                System.out.print(a[i][j]+"\t");
            }
            System.out.println();
        }
    }
    public static void main(String[] args)
    {
        int a[][];
        a=new int[10][10];
        multiply(a);
        display(a);
    }

}
