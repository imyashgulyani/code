import java.util.*;
class gretest {
    public static void main(String[] args) {
        Scanner ob=new Scanner(System.in);
        System.out.print("enter three numbers");
        int a,b,c;
        a=ob.nextInt();
        b=ob.nextInt();
        c=ob.nextInt();
        if(a>b && a>c)
        {
            System.out.print("greatest is "+a);
        }
        else if(b>c)
        {
            System.out.print("greatest is "+b);
            
        }
        else
        {
            System.out.print("greatest is "+c);
        }
    }
}
