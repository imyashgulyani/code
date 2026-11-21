import java.util.*;
public class power {
    public static void main(String[] args)
    {
        System.out.print(calculate(2,3));
    }
    static int calculate(int a,int b)
    {
        return a=a*calculate(a,b-1);
    }
}
