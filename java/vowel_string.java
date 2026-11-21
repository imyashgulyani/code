import java.util.*;
public class vowel_string {
    static Scanner ob=new Scanner(System.in);
    public static void main(String[] args)
    {
        int n;
        int i;
        System.out.print("enter size of string");
        n=ob.nextInt();
        String[] a=new String[n];
        input(a,n);
        for(i=0;i<n;i++)
        {
            System.out.println("number of vowels in "+a[i]+" is ="+check(a[i]));
        }
    }
    public static void input(String[] a,int n)
    {
        int i;
        ob.nextLine();
        for(i=0;i<n;i++)
        {
            a[i]=ob.nextLine();
        }
    }
    public static int check(String str)
    {
        int i;
        String str1=str.toLowerCase();
        int count=0;
        for(i=0;i<str1.length();i++)
        {
            char c=str1.charAt(i);
            if(c=='a' || c=='e' || c=='o' || c=='u' || c=='i')
            {
                count++;
            }
        }
        return count;
    }
}