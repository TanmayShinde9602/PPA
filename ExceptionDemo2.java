import java.util.Scanner;

class ExceptionDemo2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int Arr[] = {10,20,30,40,50};
       
        int index = 0;

        System.out.println("Enter the index :");
        index = sobj.nextInt();

        System.out.println("Value at the given index is : "+Arr[index]);

    }
}

//ithe array madhe 5 element aahe aani aapn jr array madhla element access
// krnya sathi jr 6 aas input dil tr error yeil ani to error asel
//ArrayOutOfBound
//execute kelya vr aaplya kalal ki exceotion aahe mg aapn try aani catch block lihinar 