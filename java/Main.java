import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner ob=new Scanner(System.in);
        System.out.print("enter number for factorial");
        int a;
        int b;
        int c=0;
        System.out.print("enter number for addition");
        a=ob.nextInt();
        while(a!=0)
        {
            b=a%10;
            c=c+b;
            a=a/10;
        }
        System.out.print("addition is "+c);
    }
} 