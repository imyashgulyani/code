import java.util.Arrays;

public class new_three 
{
    static class abc
    {
        int a;
        abc()
        {
            a=10;
            System.out.println("inner class "+a);
        }
    }
    new_three()
    {
        System.out.println("outer class");
        new abc();
    }
    public static void main(String args[])
    {
        new new_three();
        
    }
}
