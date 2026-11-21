import java.util.*;
public class vowel {
    public static void main(String args[])
    {
        Scanner ob = new Scanner(System.in);
        int i;
        int count=0;
        System.out.print("enter string");
        String s=ob.nextLine();
        int n=s.length();
        for(i=0;i<n;i++)
        {
            if(s.charAt(i)==' ')
            {
                count++;
            }
        }
        System.out.print("Total number of words are "+(count+1));
    }
}
