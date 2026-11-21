import java.util.*;
public class stack_array {
    static int top=-1;
    static int arr[]=new int[5];
    static Scanner ob=new Scanner(System.in);
    void push(int a)
    {
        if(top==4)
        {
            System.out.print("stack is full");
            return;
        }
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
    void display()
    {
        for(int i=top;i>=0;i--)
        {
            System.out.print(arr[i]+" ");
        }
    }
    public static void main(String[] args)
    {
        int b=1;
        stack_array a=new stack_array();
        while(b!=0)
        {
            int ch;
            System.out.println("enter 1 for push");
            System.out.println("enter 2 for pop");
            System.out.println("enter 3 for display");
            System.out.println("enter 0 for exit");
            System.out.print("enter case");
            ch=ob.nextInt();
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
                    a.display();
                    break;
                }
                case 0:
                {
                    b=0;
                    break;
                }
            }
        }
    }
}
