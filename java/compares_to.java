import java.util.*;
public class compares_to {
    public static void main(String [] args)
    {
        String s3;
        Scanner ob=new Scanner(System.in);
        System.out.print("enter first string :");
        String s1=ob.nextLine();
        System.out.print("enter second string :");
        String s2=ob.nextLine();
        if(check(s1,s2))
        {
            s3=s1;
            s1=s2;
            s2=s3;
        }
        System.out.println("s1 is now: " + s1);
        System.out.println("s2 is now: " + s2);
    }
    public static boolean check(String s1,String s2)
    {
        if((s1.compareTo(s2))<0)
        {
            return true;
        }
        return false;
    }
}