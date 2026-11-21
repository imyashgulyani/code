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
public class basic_list 
{
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
            last.next=null;
        }
        void disp()
        {
            node temp=first;
            while(temp!=null)
            {
                System.out.print(temp.data+" ");
                temp=temp.next;
            }
        }
        node getnode()
        {
            node temp=first;
            while(temp.next!=null)
            {
                temp=temp.next;
            }
            return temp;
        }
        int sum()
        {
            int sum=0;
            node temp=first;
            while(temp!=null)
            {
                sum=sum+temp.data;
                temp=temp.next;
            }
            return sum;
        }
        void largest_smallest()
        {
            int max=-Integer.MAX_VALUE;
            int min=Integer.MAX_VALUE;
            node temp=first;
            while(temp!=null)
            {
                if(temp.data>max)
                {
                    max=temp.data;
                }
                if(temp.data<min)
                {
                    min=temp.data;
                }
                temp=temp.next;
            }
            System.out.println();
            System.out.println("maximum value is ="+max);
            System.out.println("minimum value is ="+min);
        }
        void count_even_odd()
        {
            int count_even=0;
            int count_odd=0;
            node temp=first;
            while(temp!=null)
            {
                if(temp.data%2==0)
                {
                    count_even++;
                }
                else
                {
                    count_odd++;
                }
                temp=temp.next;
            }
            System.out.println("count of even number is  ="+count_even);
            System.out.println("count of odd number is ="+count_odd);
        }
        void add_even_odd()
        {
            int sum_even=0;
            int sum_odd=0;
            node temp=first;
            while(temp!=null)
            {
                if(temp.data%2==0)
                {
                    sum_even=sum_even+temp.data;
                }
                else
                {
                    sum_odd=sum_odd+temp.data;
                }
                temp=temp.next;
            }
            System.out.println("addition of even elements is ="+sum_even);
            System.out.println("addition of odd elements is ="+sum_odd);
        }

        void reverse()
        {
            node prevnode,temp,nextnode;
            prevnode=null;
            temp=first;
            while(temp!=null)
            {
                nextnode=temp.next;
                temp.next=prevnode;
                prevnode=temp;
                temp=nextnode;
            }
            first=prevnode;
        }
        void concat_list(basic_list l1)
        {
            node temp=l1.first;
            while(temp!=null)
            {
                NEW=new node(temp.data);
                if(first==null)
                {
                    first=NEW;
                }
                else
                {
                    last.next=NEW;
                }
                last=NEW;
                temp=temp.next;
            }
            last.next=null;
        }
        int search()
        {
            System.out.print("enter number to be searched");
            int a=ob.nextInt();
            node temp=first;
            while(temp!=null)
            {
                if(temp.data==a)
                {
                    return 1;
                }
                temp=temp.next;
            }
            return 0;
        }
        void swap()
        {
            if(search()==1)
            {
            }
        }
        void del_beg()
        {
            if(first==null)
            {
                System.out.print("the list is empty");
                return;
            }
            first=first.next;
        }
        void del_end()
        {
            if(first==null)
            {
                System.out.print("the list is empty");
                return;
            }
            if(first.next==null)
            {
                first=null;
                return;
            }
            node temp=first;
            while(temp.next.next!=null)
            {
                temp=temp.next;
            }
            temp.next=null;
        }
        void del_des(int k)
        {
            if(first==null)
            {
                System.out.print("the lsit is empty");
                return;
            }
            if(k==1)
           {
                first=first.next;
                return;
            }
            int count=1;
            node temp=first;
            node prevnode=null;
            while(temp!=null)
            {
                if(count==k)
                {
                    prevnode.next=temp.next;
                    return;
                }
                prevnode=temp;
                temp=temp.next;
                count++;
            }
        }
        void ins_beg()
        {
            System.out.print("enter value to put at begening");
            int a=ob.nextInt();
            node temp=new node(a);
            temp.next=first;
            first=temp;
            if(last==null)
            {
                last=temp;
            }
        }
        void ins_end()
        {
            int a;
            System.out.print("enter value to enter at end");
            a=ob.nextInt();
            if(first==null)
            {
                node newnode=new node(a);
                first=newnode;
                last=newnode;
                return;
            }
            node temp=first;
            while(temp.next!=null)
            {
                temp=temp.next;
            }
            node newnode=new node(a);
            temp.next=newnode;
            newnode.next=null;
        }
        void ins_des()
        {
            int i;
            System.out.print("enter value to insert at desired position");
            int a;
            a=ob.nextInt();
            node newnode=new node(a);
            if(first==null)
            {
                first=newnode;
                last=newnode;
                return;
            }
            node temp=first;
            int b;
            System.out.print("enter the desired position");
            b=ob.nextInt();
            for(i=0;i<b-1;i++)
            {
                if(temp.next==null)
                {
                    break;
                }
                temp=temp.next;
            }
            newnode.next=temp.next;
            temp.next=newnode;
        }
        int binarySearch(int key)
        {
            int[] arr = listToArray();
            int left = 0;
            int right = arr.length - 1;
            while(left <= right)
            {
                int mid = left + (right - left) / 2;
                if(arr[mid] == key)
                {
                    return mid;
                }
                if(arr[mid] < key)
                {
                    left = mid + 1;
                }
                else
                {
                    right = mid - 1;
                }
            }
            return -1;
        }
        void binarySearch()
        {
            System.out.print("enter number to search using binary search: ");
            int key = ob.nextInt();
            int result = binarySearch(key);
            if(result != -1)
            {
                System.out.println("element found at index: " + result);
            }
            else
            {
                System.out.println("element not found");
            }
        }
        int[] listToArray()
        {
            int size = 0;
            node temp = first;
            while(temp != null)
            {
                size++;
                temp = temp.next;
            }
            int[] arr = new int[size];
            temp = first;
            int i = 0;
            while(temp != null)
            {
                arr[i] = temp.data;
                temp = temp.next;
                i++;
            }
            return arr;
        }
        public static void main(String [] args)
        {
            basic_list l1=new basic_list();
            basic_list l2=new basic_list();
            //basic_list l3=new basic_list();
            l1.createlist();
            l2.createlist();
            //l1.disp();
            //node last=l1.getnode();
            //System.out.print("last value at node is ="+last.data);
            //System.out.println();
            //int a=l1.sum();
            //System.out.print("sum of the numbers = "+a);
            //l1.largest_smallest();
            //if(l1.search()==1)
            //{
            //    System.out.println("element found");
            //}
            //else
            //{
            //    System.out.println("element not found");
            //}
            //l1.count_even_odd();
            //l1.add_even_odd();
            //l1.reverse();
            //System.out.print("reverse of string is =");
            //
            //l1.disp();
            //l1.reverse();
            //l3.concat_list(l1);
            //node last=l3.getnode();
            //last.next=l2.first;
            //l3.disp();
            System.out.print("hello");
        }
}