import java.util.*;
public class pali_string {
    public static void main(String[] args)
    {
        Scanner ob=new Scanner(System.in);
        System.out.print("enter your string");
        String [] s1=s.split(" ");
        boolean flag=false;
        for(String i:s1)
        {
            if(check(i))
            {
                System.out.print(i);
                flag=true;
            }
        }
        if(!flag)
        {
            System.out.print("no palindrome word found");
        }
    }
    public static boolean check(String s)
    {
        String s=s.toLowerCase();
        int left=0;
        int right=s.length()-1;
        while(left<right)
        {
            if(s.charAt(left)!=s.charAt(right))
            {
                return false;
            }
            return true;
        }
    }
}
