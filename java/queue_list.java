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
public class queue_list {
    node front=null,rear=null;
    void enqueue(int a)
    {
        node NEW=new node(a);
        if(front==null)
        {
            front=NEW;
            rear=NEW;
        }
        else
        {
            rear.next=NEW;
            rear=NEW;
        }
    }
    void dequeue()
    {
        if(front==null)
        {
            System.out.print("queue is empty");
            return;
        }
        System.out.print("dequeue element is "+front.data);
        front=front.next;
        if(front==null)
        {
            rear=null;
        }
    }
    void display()
    {
        if(front==null)
        {
            System.out.print("queue is empty");
            return;
        }
        node temp=front;
        System.out.print("queue elements are: ");
        while(temp!=null)
        {
            System.out.print(temp.data+" ");
            temp=temp.next;
        }
        System.out.println();
    }
    public static void main(String[] args)
    {
        int b=1;
        Scanner ob=new Scanner(System.in);
        queue_list a=new queue_list();
        while(b!=0)
        {
            int ch;
            System.out.println("enter 1 for enqueue");
            System.out.println("enter 2 for dequeue");
            System.out.println("enter 3 for display");
            System.out.println("enter 0 for exit");
            System.out.print("enter case");
            ch=ob.nextInt();
            switch(ch)
            {
                case 1:
                {
                    System.out.print("enter element to enqueue");
                    int n=ob.nextInt();
                    a.enqueue(n);
                    break;
                }
                case 2:
                {
                    a.dequeue();
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
