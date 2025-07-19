import java.util.Scanner;

abstract class Arithematic
{
    abstract public int Addition(int A, int B);
    abstract public int Substraction(int A, int B);

    public int multiplication(int A, int B)
    { 
        return A*B;        
    }
}
class Marvellous extends Arithematic
{
    public int Addition(int A,int B)
    {
        return A + B;
    }
    public int Substraction(int A, int B)
    {
        return A - B;
    }
}
class practice
{
    public static void main(String Args[])
    { 
        int No1, No2;
        Scanner sobj = new Scanner(System.in);
        Marvellous mobj = new Marvellous();
        
        System.out.println("Enter the first number");
        No1 = sobj.nextInt();

        System.out.println("Enter the Second number");
        No2 = sobj.nextInt();

        System.out.println("Addition of two no is :"+mobj.Addition(No1,No2));
        System.out.println("Substraction of two no is :"+mobj.Substraction(No1,No2));
        System.out.println("Multiplication of two no is :"+mobj.multiplication(No1,No2));
    }
}