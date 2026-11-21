import java.util.*;
public class count_unique {
    public static void main(String[] args)
    {
        String s="RANJANA";
        String s2=s.toLowerCase();
        int i,j;
        for(i=0;i<s2.length();i++)
        {
            boolean unique=true;
            for(j=0;j<s2.length();j++)
            {

                if(i!=j && s2.charAt(i)==s2.charAt(j))
                {
                    unique=false;
                    break;
                }
            }
            if (unique) {
            System.out.print(s2.charAt(i) + " ");
            }
        }

    }
}
