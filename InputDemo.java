import java.security.DrbgParameters.NextBytes;
import java.util.*;
class InputDemo
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        int no1 = 0, no2 = 0, ans = 0;

        System.out.println("Enter the First No :");
        no1 = sobj.nextInt();

        System.out.println("Enter the Second :");
        no2 = sobj.nextInt();

        ans = no1 + no2;
        System.out.println("Addition is : "+ans);
    }
}


/*

Datatype            Method from Scanner class

boolean             nextBoolean()
byte                nextByte()
int                 nextInt()
float               nextFloat()
double              nextDouble()
short               nextShort()
long                nextLong()
String              nextLine()

*/