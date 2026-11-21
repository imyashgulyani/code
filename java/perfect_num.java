import java.util.*;
class perfect_num{
    static Scanner ob=new Scanner(System.in);
    static void perfect(int a)
    {
        int b;
        int flag=0;
        while(a>0 && a%2==0)
        {
            b=a%10;
            if(b%2==0)
            {
                continue;
            }
            else
            {
                flag=1;
                break;
            }
            a=a/10;
        }
        while(a>0 && a%2!=0)
        {
            if(a%2!=0)
            {
                continue;
            }
            else{
                flag=1;
                break;
            }
            a=a/10;
        }
    }
    public static void main(String[] args)
    {
        int a;
        System.out.print("enter number in array");
        a=ob.nextInt();
        perfect(a);
    }
}