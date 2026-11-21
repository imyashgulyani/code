import java.util.*;
public class practice {
    public static void main(String[] args)
    {
        Scanner ob=new Scanner(System.in);
        ArrayList <Integer> arr=new ArrayList <> ();
        int i;
        System.out.print("enter length of list");
        int n=ob.nextInt();
        for(i=0;i<n;i++)
        {
            System.out.print("enter numbers in array list");
            int a=ob.nextInt();
            arr.add(a);
        }
        for(i=0;i<arr.size();i++)
        {
            if(arr.get(i)<0)
                
            {
                arr.add(0,arr.get(i));
                arr.remove(i+1);
            }
        }
        System.out.print(arr);
    }
}
