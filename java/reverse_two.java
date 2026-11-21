import java.util.*;
public class reverse_two {
    public static void main(String[] args)
    {
        int k=0;
        int j;
        int i;
        String s="this is computer";
        String s1="";
        s1=s1+" ";
        int n=s.length();
        for(;;)
        {
            i=s.indexOf(' ',k);
            if(i==-1)
            {
                break;
            }
            for(j=i-1;j>=k;j--)
            {
                s1=s1+s.charAt(j);
            }
            System.out.print(s1);
            k=i+1;
        }
        System.out.print(s1);
    }
}
