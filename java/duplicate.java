public class duplicate {
    static boolean search(int x[], int s)
    {
        for (int i=0; i<x.length; i++)
        {
            if (s==x[i])
            {
                return true;
            }
        }
        return false;
    }
    static int frequency(int arr[],int x)
    {
        int i;
        int count;
        for(i=0;i<arr.length;i++)
        {
            if(x==arr[i])
            {
                count++;
            }
        }
        return count;
    }
    public static void main(String[] args) 
    {
        int k=0;
        int b=0;
        int i;
        int[] arr = {1,9,2,8,8,2,2};
        int [] arr2=new int[arr.length];
        for (int i=0; i<arr.length; i++)
        {
            if (search(arr2, arr[i])==false)
            {
                arr2[k] = arr[i];
                k++;
            }
        }
        for (i=0; i<k; i++){
            System.out.print(arr2[i] + " ");
        }
        for(i=0;i<arr2.length;i++)
        {
            int c=arr2[i];
            b=b+frequency(arr,c);
        }
    }
}
