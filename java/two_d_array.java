import java.util.*;
public class two_d_array {
    static Scanner ob=new Scanner(System.in);
    static void input(int a[][],int r,int c)
    {
        int i,j;
        System.out.println("entr number in arrays");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                a[i][j]=ob.nextInt();
            }
        }
    }
    static void display(int a[][],int r,int c)
    {
        int i,j;
        System.out.println("the alement in array are");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                System.out.print(a[i][j]+"\t");
            }
            System.out.println();
        }

    }
    public static void main(String[] args)
    {
        int a[][],r,c;
        System.out.print("enter number of rows");
        r=ob.nextInt();
        System.out.print("enter number of column");
        c=ob.nextInt();
        a=new int[r][c];
        input(a,r,c);
        display(a,r,c);
    }
}
