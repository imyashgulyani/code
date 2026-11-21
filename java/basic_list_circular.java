import java.util.*;
    class node{
        int data;
        node next;
        node(int data)
        {
            this.data=data;
            this.next=null;
        }
    }
public class basic_list_circular {
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
                
                System.out.print("enter number");
                System.out.println();
                NEW=new node(ob.nextInt());
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
            last.next=first;
        }
        node getlastnode()
        {
            node temp=first;
            while(temp.next!=first)
            {
                temp=temp.next;
            }
            return temp;
        }
        void display()
        {
            node temp=first;
            if(first==null)
            {
                System.out.print("the list is empty");
                return;
            }
            else
            {
                while(temp.next!=first)
                {
                    System.out.print(temp.data+" ");
                    temp=temp.next;
                }
                System.out.print(temp.data+" ");
            }
        }
        void ins_beg()
        {
            System.out.print("enter number to be inserted at begening");
            int a=ob.nextInt();
            node NEW=new node(a);
            if(first==null)
            {
                first=NEW;
                last=NEW;
                last.next=first;
            }
            else
            {
                NEW.next=first;
                first=NEW;
                last.next=first;
            }
            last=getlastnode();
        }
        void ins_end()
        {
            System.out.print("enter number to be inserted at end");
            int a=ob.nextInt();
            node NEW=new node(a);
            if(first==null)
            {
                first=NEW;
                last=NEW;
                first.next=last;
            }
            else
            {
                last.next=NEW;
                last=NEW;
                last.next=first;
            }
            last=getlastnode();
        }
        void ins_des()
        {
            System.out.print("enter number to be inserted at desired position");
            int a=ob.nextInt();
            System.out.print("enter position");
            int b=ob.nextInt();
            node NEW=new node(a);
            node temp;
            node prev=null;
            temp=first;
            if(first==null)
            {
                first=NEW;
                last=NEW;
                last.next=first;
            }
            else
            {
                int i;
                for(i=0;i<b-1 && temp.next!=first;i++)
                {
                    prev=temp;
                    temp=temp.next;
                }
                prev.next=NEW;
                NEW.next=temp;
            }
        }
        void del_beg()
        {
            last=getlastnode();
            if(first==null)
            {
                System.out.print("list is empty");
                return;
            }
            else
            {
                first=first.next;
                last.next=first;
            }
        }
        void del_end()
        {
            if(first==null)
            {
                System.out.print("the list is empty");
                return;
            }
            else
            {
                node temp=first;
                node prev=null;
                while(temp.next!=first)
                {
                    prev=temp;
                    temp=temp.next;
                }
                prev.next=first;
            }
        }
        void del_des()
        {
            System.out.print("enter position to be deleted");
            int a=ob.nextInt();
            if(first==null)
            {
                System.out.print("the list is empty");
                return;
            }
            else
            {
                node temp=first;
                node prev=null;
                int i;
                for(i=0;i<a-1 && temp.next!=null;i++)
                {
                    prev=temp;
                    temp=temp.next;
                }
                prev.next=temp.next;
            }
        }
        public static void main(String[] args)
        {
            basic_list_circular a=new basic_list_circular();
            a.createlist();
            a.display();
//            a.ins_beg();
//            a.display();
//            a.ins_end();
//            a.display();
//            a.ins_des();
//            a.display();
            System.out.println();
            a.del_beg();
            a.display();
            System.out.println();
            a.del_end();
            a.display();
            System.out.println();
            a.del_des();
            a.display();
        }
}
