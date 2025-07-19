import java.util.io.*;

class ExceptionDemo7
{
    public static void main(String A[])  throws IOException
    {
        try
        {
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter your name : ");
        String name = bobj.readline();

        System.out.println("Enter your Age :");
        int Age = Integer.parseInt(bobj.readline());

        System.out.println("Your name :"+name);
        System.out.println("Your Age :"+Age);
        }
        catch(Exception obj)
        {}

     }
}     