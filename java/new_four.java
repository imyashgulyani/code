import java.util.*;
public class new_four {
    public static void main(String [] args)
    {
        int arr[]={10,5,25,17,2};
        System.out.print(xyz(arr,5));
    }
    static int xyz(int x[],int n)
    {
        int a;
        if(n==1)
        {
            return x[0];
        }
        else
        {
            a=xyz(x,n-1);
            if(a>x[n-1])
            {
                return a;
            }
            else{
                return x[n-1];
            }
        }
    }
}
