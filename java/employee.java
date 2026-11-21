import java.util.*;
class employee{
    int salary;
    int code;
    String name;
    float hra,da,conv,total;
    Scanner ob=new Scanner(System.in);
    void input()
    {
        System.out.print("enter value for employee code");
        code=ob.nextInt();
        System.out.print("enter salary");
        salary=ob.nextInt();
        System.out.print("enter name of employee");
        name=ob.next();
    }
    void calculate()
    {
        hra=(salary*0.2f);
        da=(salary*0.15f);
        conv=(salary*0.1f);
        total=salary+hra+da+conv;
    }
    void display()
    {
        System.out.print("name ="+name+"code ="+code+"total ="+total);
    }
    public static void main(String[] args)
    {
        employee e1=new employee();
        employee e2=new employee();
        e1.input();
        e2.input();
        e1.calculate();
        e2.calculate();
        e1.display();
        e2.display();
    }
}