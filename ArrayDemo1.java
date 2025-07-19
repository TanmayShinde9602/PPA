class ArrayDemo1
{
    public static void main(String A[])
    {
        int Arr1[] = {10,20,30,40}; // Static  INITIALIZATION

        System.out.println(Arr1[0]);
        System.out.println(Arr1[1]);
        System.out.println(Arr1[2]);
        System.out.println(Arr1[3]);
        
        System.out.println("NO. of elements in Arr1 are :"+Arr1.length);   

                  //LENGTH HE array madhe kiti element aahe te sangat        

        int Arr2[] = new int[4];    // Dynamic INITIALIZATION

        
        Arr2[0] = 10;
        Arr2[1] = 20;
        Arr2[2] = 30;
        Arr2[3] = 40;
        
        System.out.println("NO. of elements in Arr2 are :"+Arr2.length);
    }
}