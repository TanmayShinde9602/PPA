class Demo extends Thread
{
    public void run()
    {
        System.out.println("Thread is Running with name :"+Thread.currentThread().getName());
        try
        {
            int i =0;
        for(i = 1; i<= 10; i++)
        {
            System.out.println(Thread.currentThread().getName() + "with ID :"+ i);
        }
            Thread.sleep(1000);
        }
        catch(Exception obj)
        {

        }
        
    }

}

class ThreadDemo6
{
    public static void main(String A[]) throws Exception
    {
        System.out.println("Inside Main Thread :"+Thread.currentThread().getName());

        Demo dobj1 = new Demo();
        Thread tobj1 = new Thread(dobj1);
        tobj1.setName("PPA");
        Demo dobj2 = new Demo();
        Thread tobj2 = new Thread(dobj2);
        tobj2.setName("LB");

        tobj1.start();
        tobj2.start();

        System.out.println("End of Main Thread...");
       }
}
//hyat execute kelya vr bg ki End of main thread aadhich hotay 
//he nako vhayala mhanun pudhacha program 
//jyat aapan thread join kelet 
