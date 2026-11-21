import java.util.*;
public class series {
    public static void main(String []args)
    {
        int i;
        for(i=0;i<10;i++)
        {
            System.out.println(xyz(i));
        }
    }
    static int xyz(int x)
    {
        if(x==0 || x==1)
        {
            return x;
        }
        else
        {
            return (xyz(x-1)+xyz(x-2));
        }

    }
}
