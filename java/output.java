public class output {
    public static void main(String [] args)
    {
        String S = "HELLO";
        String S1 = "Hello";
        String S2 = "HELLO";
        String S3 = S;
        String S4 = "World";
        String S5= new String("HELLO");
        String S6 = new String(S);
        System.out.println(S.equals(S1));
        System.out.println(S.equalsIgnoreCase(S1));
        System.out.println(S==S1);
        System.out.println();
        System.out.println(S.equals(S2));
        System.out.println(S.equalsIgnoreCase(S2));
        System.out.println(S==S2);
        System.out.println();
        System.out.println(S.equals(S3));
        System.out.println(S.equalsIgnoreCase(S3));
        System.out.println(S==S3);
        System.out.println();
        System.out.println(S.equals(S4));
        System.out.println(S.equalsIgnoreCase(S4));
        System.out.println(S==S4);
        System.out.println();
        System.out.println(S.equals(S5));
        System.out.println(S.equalsIgnoreCase(S5));
        System.out.println(S==S5);
        System.out.println();
        System.out.println(S.equals(S6));
        System.out.println(S.equalsIgnoreCase(S6));
        System.out.println(S==S6);
        System.out.println();
        System.out.println(S5.equals(S6));
        System.out.println(S5.equalsIgnoreCase(S6));
        System.out.println(S5==S6);
        System.out.println();
    }
}
