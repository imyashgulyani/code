import java.util.Scanner;
public class factorial {
    static int x,n,i;
    static int add=0;
    static int a=1;
    static Scanner ob=new Scanner(System.in);
    static void input()
    {
        System.out.print("enter values of x and n");
        x=ob.nextInt();
        n=ob.nextInt();
    }
    static int fact(int b)
    {
        a=1;
            while(b!=0)
            {
                a=a*b;
                b--;
            }
           return a;
    }
    static void display()
    {
        System.out.print("ans is="+add);
    }
    public static void main(String[] args)
    {
        input();
        for(int i=1;i<=n;i++)
        {
            int s=fact((x+i));
            add=add+fact(x+i)/(i+1);
        }
        display();
    }
}