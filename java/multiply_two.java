import java.util.Scanner;
public class multiply_two {
    static Scanner ob=new Scanner(System.in);
    static void multiply(int a[][])
    {
        int i,j;
        for(i=0;i<10;i++)
        {
            for(j=0;j<10;j++)
            {
                a[j][i]=(j+2)*(i+1);
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

