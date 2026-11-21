import java.util.*;
public class add_class {
    Scanner ob=new Scanner(System.in); 
    int a;
    int b;
    void input()
    {
        System.out.print("enter first number");
        a=ob.nextInt();
        System.out.print("enter second number");
        b=ob.nextInt();
    }
    static add_class add(add_class a1,add_class a2)
    {
        add_class temp=new add_class();
        temp.a=a1.a+a2.a;
        temp.b=a1.b+a2.b;
        return temp;
    }
    public static void main(String[] args)
    {
        add_class a1=new add_class();
        add_class a2=new add_class();
        add_class a3=new add_class();
        a1.input();
        a2.input();
        a3=add(a1,a2);
        System.out.println("addition of first number are "+a3.a);
        System.out.print("addition of second number are "+a3.b);
    }
}
