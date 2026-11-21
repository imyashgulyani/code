public class rec_fact {
    public static void main(String[] args)
    {
        int i=5,f;
        f=fact(i);
        System.out.print("factorial ="+f);
    }
    static int fact(int x)
    {
        if(x==1)
        {
            return 1;
        }
        else
        {
            return (x*fact(x-1));
        }
    }
}
