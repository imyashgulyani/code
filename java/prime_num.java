import java.util.*;
public class prime_num {
    static Scanner ob=new Scanner(System.in);
    static boolean prime(int a)
    {
        int i;
        for(i=2;i<=a/2;i++)
        {
            if(a%i==0)
            {
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args)
    {
        int i;
        for(i=2;i<=100;i++)
        {
            if(prime(i))
            {
                System.out.print(i+"\t");
            }
        }
    }
    
}
