import java.util.*;
public class anagram {
    static Scanner ob=new Scanner(System.in);
    public static void main(String [] args)
    {
        String a;
        String b;
        System.out.print("enter first string");
        a=ob.nextLine();
        System.out.print("enter second string");
        b=ob.nextLine();
        if(check(a,b)==1)
        {
            System.out.print("the string is anagram");

        }
        else{
            System.out.print("the string is not anagram");
        }
    }
    static int check(String a,String b)
    {
        int c=1;
        if(a.length()==b.length())
        {
            int i,j;
            for(i=0;i<a.length();i++)
            {
                int count_one=0;
                int count_two=0;
                for(j=0;j<a.length();j++)
                {
                    if(a.charAt(i)==a.charAt(j))
                    {
                        count_one++;
                    }
                }
                for(j=0;j<b.length();j++)
                {
                    if(a.charAt(i)==b.charAt(j))
                    {
                        count_two++;
                    }
                }
                if(count_one!=count_two)
                {
                    c=0;
                    break;
                }
            }
        }
        else
        {
            c=0;
        }
        return c;
    }
}
