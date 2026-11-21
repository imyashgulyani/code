import java.util.*;
public class binary {
    static Scanner ob=new Scanner(System.in);
    static String bina(int num)
    {
        String a=" ";
        while(num>0)
        {
            a=num%2+a;
            num=num/2;
        }
        return a;
    }
    public static void main(String[] args)
    {
        int num;
        System.out.print("enter number to convert to binary");
        num=ob.nextInt();
        System.out.print("binary number is ="+bina(num));
    }
}
