import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner ob=new Scanner(System.in);
        System.out.print("enter number for factorial");
        int a,b=1;
        a=ob.nextInt();
        while(a!=0)
        {
            b=b*a;
            a--;
        }
        System.out.print("factorial is "+b);
    }
}
