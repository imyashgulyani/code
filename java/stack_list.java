import java.util.*;
class node
{
    int data;
    node next;
    node(int a)
    {
        data=a;
        next=null;
    }
}
public class stack_list {
    node top=null;
    void push(int a)
    {
        node n=new node(a);
        if(top==null)
        {
            top=n;
        }
        else
        {
            n.next=top;
            top=n;
        }
    }
    void pop()
    {
        if(top==null)
        {
            System.out.print("stack is empty");
        }
        else
        {
            System.out.println("popped element is "+top.data);
            top=top.next;
        }
    }
    void display()
    {
        if(top==null)
        {
            System.out.print("stack is empty");
            return;
        }
        node temp=top;
        while(temp!=null)
        {
            System.out.print(temp.data+" ");
            temp=temp.next;
        }
    }
    public static void main(String[] args)
    {
        int b=1;
        stack_list a=new stack_list();
        Scanner ob=new Scanner(System.in);
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
                default:
                {
                    System.out.print("invalid case");
                }
            }
        }    
    }
}
