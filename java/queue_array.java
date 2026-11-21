import java.util.*;
public class queue_array {
    int front=-1,rear=-1;
    int arr[]=new int[5];
    void enqueue(int a)
    {
        if(rear==4)
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
        
    }
    public static void main(String[] args)
    {

    }
}
