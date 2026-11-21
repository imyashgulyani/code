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
            top=top.next;
        }
    }
    void display()
    {
        node temp=top;
        while(temp!=null)
        {
            System.out.print(temp.data+" ");
            temp=temp.next;
        }
    }
    public static void main(String[] args)
    {

    }
}
