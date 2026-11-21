import java.util.*;
public class new_five {
    public static void main(String [] args)
    {
        System.out.println(xyz(6));
    }
    static int xyz(int x)
    {
        if(x%2!=0)
        {
            return x++;
        }
        else
        {
            return(xyz(xyz(x-1)));
        }
    }
}
