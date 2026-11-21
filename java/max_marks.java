import java.util.*;
public class max_marks {
    static Scanner ob=new Scanner(System.in);
    static void input(int a[][],int r)
    {
        int i,j;
        for(i=0;i<r;i++)
        {
            for(j=0;j<2;j++)
            {
                if(j==0)
                    System.out.print("enter roll number :");
                else
                    System.out.print("enter marks :");
                a[i][j]=ob.nextInt();
            }
            System.out.println();
        }
    }
    static void max_number(int a[][],int r)
    {
        int i;
        int max=a[0][1];
        int idx=0;
        for(i=0;i<r;i++)
        {
            if(a[i][1]>max)
            {
                max=a[i][1];
                idx=i;
            }
        }
        System.out.println("max marks is="+max);
        System.out.print("roll number ="+a[idx][0]);
    }
    public static void main(String[] args)
    {
        int a[][],r;
        System.out.print("enter total number of rows :");
        r=ob.nextInt();
        a=new int[r][2];
        input(a,r);
        max_number(a,r);
    }
}
