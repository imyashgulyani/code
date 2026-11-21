import java.util.*;
public class recursion {
    static Scanner ob=new Scanner(System.in);
    public static void main(String[] args) 
    {
        int a;
        System.out.print("enter number for table");
        a=ob.nextInt();
        table(a,1);
    }
    static void table(int a,int i)
    {
        if(i<=10)
        {
            System.out.println(i*a);
            table(a,i+1);
        }
    }
}
