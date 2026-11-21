import java.util.Scanner;
public class Hexadecimal {
    static Scanner ob=new Scanner(System.in);
    static String bina(int num)
    {
        String a=" ";
        while(num>0)
        {
            int r=num%16;
            if(num%16<=9)
            {
                a=r+a;
            
            }
            else
            {
                a=(char)(r+55)+a;
            }
            num=num/16;
        }
        return a;
    }
    
    public static void main(String[] args)
    {
        int num;
        System.out.print("enter number to convert to binary");
        num=ob.nextInt();
        System.out.print("binary number is = "+bina(num));
    }
}

