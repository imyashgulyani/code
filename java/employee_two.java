import java.util.Scanner;
public class employee_two {
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
        System.out.print(name+"\t"+" "+code+" "+"\t"+total);
    }
    static int search(String n,employee_two e[])
    {
        int i;
        for(i=0;i<e.length;i++)
        {
            if(e[i].name.equals(n))
            {
                return i;
            }
        }
        return -1;
    }
    public static void main(String[] args)
    {
        Scanner oc=new Scanner(System.in);
        int i;
        int n;
        System.out.print("enter total objects");
        n=oc.nextInt();
        employee_two e[]=new employee_two[n];
        for(i=0;i<n;i++)
        {
            e[i]=new employee_two();
            e[i].input();
            e[i].calculate();
        }
        for(i=0;i<n;i++)
        {
            e[i].display();
            System.out.println();
        }
        System.out.print("enter name to be searched");
        String empn=oc.next();
        int c=search(empn,e);
        if(c==-1)
        {
            System.out.print("name not found");
        }
        else
        {
            System.out.println("name found");
            e[c].display();
        }
    }
}
