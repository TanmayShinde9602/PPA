class Demo
{
    public Demo()
    {
        System.out.println("Inside the constructor");
    }
     protected void finalize()
    {
        System.out.println("Inside the finalize method");
    }
}

class ObjectDemo3
{
    public static void main(String Args[])
    {
         Demo obj = new Demo();
         obj = null;
         System.gc(); 
    }
}