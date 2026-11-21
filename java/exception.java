public class exception {
    public static void main(String args[])
    {
        int a,b,c;
        a=10;
        b=0;
        try{
            c=a/b;
            System.out.print("division is = "+c);
        }
        catch(ArithmeticException e)
        {
            System.out.print(e.getMessage());   
        }
        System.out.print("good going");
        System.out.print("bye");
    }
}
