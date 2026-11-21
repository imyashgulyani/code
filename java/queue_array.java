import java.util.*;
public class queue_array {
    int front=-1,rear=-1;
    int arr[]=new int[5];
    void enqueue(int a)
    {
        if(rear==arr.length-1)
        {
            System.out.print("queue is full");
            return;
        }
        if(front==-1)
        {
            front=0;
        }
        rear++;
        arr[rear]=a;
    }
    void dequeue()
    {
        if(front==-1)
        {
            System.out.print("queue is empty");
            return;
        }
        if(front==rear)
        {
            front=-1;
            rear=-1;
            return;
        }
        front++;
        System.out.print("dequeue element is"+arr[front-1]);
    }
    void display()
    {
        if(front==-1)
        {
            System.out.print("queue is empty");
            return;
        }
        for(int i=front;i<=rear;i++)
        {
            System.out.print(arr[i]+" ");
        }
    }
    public static void main(String[] args)
    {
        int b=1;
        Scanner ob=new Scanner(System.in);
        queue_array a=new queue_array();
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
