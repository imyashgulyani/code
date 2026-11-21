import java.util.*;
public class stack_array {
    static int top=-1;
    static int arr[]=new int[5];
    static Scanner ob=new Scanner(System.in);
    void push(int a)
    {
        top++;
        arr[top]=a;
    }
    void pop()
    {
        if(top==-1)
        {
            System.out.print("stack is empty");        
        }
        else
        {
            top--;
        }
    }
    public static void main(String[] args)
    {
        stack_array a=new stack_array();
        int ch;
        ch=ob.nextInt();
        while(ch!=0)
        {
            System.out.print("enter case");
            System.out.println("enter 1 for push");
            System.out.println("enter 2 for pop");
            System.out.println("enter 3 for exit");
            switch(ch)
            {
                case 1:
                {
                    System.out.print("enter element to push");
                    int n=ob.nextInt();
                    a.push(n);
                    break;
                }
                case 2:
                {
                    a.pop();
                    break;
                }
                case 3:
                {
                    ch=0;
                    break;
                }
            }
        }
    }
}
