import java.util.*;
class fibbonaci
{
    int n=0;
    fibbonaci(int a)
    {
        int i;
        int c=0;
        int b=1;
        for(i=0;i<a;i++)
        {
            System.out.print(c + " ");
            int n=c+b;
            c=b;
            b=n;
        }
    }
    public static void main(String[] args)
    {
        Scanner ob=new Scanner(System.in);
        int a;
        System.out.print("enter size of series");
        a=ob.nextInt();
        fibbonaci f1 =new fibbonaci(a);
    }
}