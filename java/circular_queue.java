import java.util.*;
public class circular_queue {
    int size=4;
    int front=-1,rear=-1;
    int [] queue=new int[size];
    static Scanner ob=new Scanner(System.in);
    void enqueue(int a)
    {
        if(front==(rear+1)%size)
        {
            System.out.println("Queue is full");
        }
        else
        {
            if(front==-1)
            {
                front=0;
            }
            rear=(rear+1)%size;
            queue[rear]=a;
        }
    }
    void dequeue()
    {
        if(front==-1)
        {
            System.out.print("queue is empty");
        }
        else
        {
            System.out.print("dequeue element is"+queue[front]);
            if(front==rear)
            {
                front=-1;
                rear=-1;
            }
            else
            {
                front=(front+1)%size;
            }
        }
    }
    void display()
    {
        if(front==-1)
        {
            System.out.print("queue is empty");
        }
        else
        {
            System.out.print("queue elements are: ");
            int i=front;
            while(i!=rear)
            {
                System.out.print(queue[i]+" ");
                i=(i+1)%size;
            }
            System.out.print(queue[rear]);
        }
    }
    public static void main(String[] args)
    {
        circular_queue cq=new circular_queue();
        int choice,val;
        do
        {
            System.out.println("\n1.Enqueue 2.Dequeue 3.Display 4.Exit");
            choice=ob.nextInt();
            switch(choice)
            {
                case 1:
                    val=ob.nextInt();
                    cq.enqueue(val);
                    break;
                case 2:
                    cq.dequeue();
                    break;
                case 3:
                    cq.display();
                    break;
                case 4:
                    break;
                default:
                    System.out.println("Invalid choice");
            }
        }while(choice!=4);
    }
}
