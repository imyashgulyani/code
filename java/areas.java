import java.util.*;
public class areas 
{
    static Scanner ob=new Scanner(System.in);
    areas(float r)
    {
        System.out.println("area of circle is ="+3.14*(r*r));
    }
    areas(int a)
    {
        System.out.println("area of square is="+a*a);
    }
    areas(float a,float b)
    {
        System.out.println("area of rectangle is="+a*b);
    }
    public static void main(String[] args)
    {
        areas a1=new areas( 7.5674f);
        areas a2=new areas(8);
        areas a3=new areas(3.414f,2.767f);
    }
}
