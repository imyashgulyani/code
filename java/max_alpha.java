import java.util.*;
public class max_alpha {
    public static void main(String [] args)
    {
        int i;
        Scanner ob=new Scanner(System.in);
        String s=new String("This is the demo of indexof and last indexof method");
        String f=new String("of");
        int n=s.length();
        int l=f.length();
        int count=0;
        for(i=0;i<n-1;i++)
        {
            if(s.substring(i,i+l).equals(f))
            {
                count++;
            }
        }
        System.out.print("total number of words are "+count);
    }
}
