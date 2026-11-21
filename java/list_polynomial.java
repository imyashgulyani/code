import java.util.*;
    class node{
        int info1;
        int info2;
        node next;
        node (int info_one,int info_two)
        {
            this.info1=info_one;
            this.info2=info_two;
        }
    }
public class list_polynomial {
    Scanner ob=new Scanner(System.in);
    node first=null,NEW,last;
        void createlist()
        {
            System.out.print("enter number of elements in list");
            int n=ob.nextInt();
            System.out.print("enter "+n +" numbers");
            System.out.println();
            int i;
            for(i=0;i<n;i++)
            {
                
                System.out.print("enter first and second number");
                System.out.println();
                NEW=new node(ob.nextInt(),ob.nextInt());
                if(first==null)
                {
                    first=NEW;
                }
                else
                {
                    last.next=NEW;
                }
                last=NEW;
            }
            last.next=null;
        }
        void polynomial()
        {
            node temp=first;
            while(temp!=null)
            {
                System.out.print(temp.info1+"x^"+temp.info2);
                temp=temp.next;
                if(temp!=null)
                {
                    System.out.print(" + ");
                }
            }
            System.out.println();
        }
        void append(int sum,int coefficient)
        {
            node NEW=new node(sum,coefficient);
            if(first==null)
            {
                first=NEW;
            }
            else
            {
                last.next=NEW;
            }
            last=NEW;
            last.next=null;
        }
        void add(list_polynomial l2,list_polynomial l1)
        {
            node temp1=l1.first;
            node temp2=l2.first;
            while(temp1!=null && temp2!=null)
            {
                if(temp1.info2>temp2.info2)
                {
                    append(temp1.info1,temp1.info2);
                    temp1=temp1.next;
                }
                else if(temp1.info2<temp2.info2)
                {
                    append(temp2.info1,temp2.info2);
                    temp2=temp2.next;
                }
                else
                {
                    int sum=temp1.info1+temp2.info1;
                    append(sum,temp1.info2);
                    temp1=temp1.next;
                    temp2=temp2.next;
                }
            }
        }
    public static void main(String[] args)
    {
        list_polynomial l1=new list_polynomial();
        list_polynomial l2=new list_polynomial();
        list_polynomial l3=new list_polynomial();
        l1.createlist();
        l2.createlist();
        l1.polynomial();
        l2.polynomial();
        l3.add(l2,l1);
        l3.polynomial();
    }
}
