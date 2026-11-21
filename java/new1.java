class abcexception extends Exception
{
    abcexception(String msg)
    {
        super(msg);
    }
}
public class new1
{
    public static void main(String[] args) {
        int a,b;
        a=10;
        b=15;
        if(a<b)
        {
            try
            
            {

                throw new abcexception("no is too small");
            }
            catch(abcexception e)
            {
                System.out.println(e.getMessage());
            }
                
        }
        else
            {
                System.out.println("Division = "+a/b);
            }
        
        
        System.out.println("Good going");
        System.out.println("bye");
    }    
}
