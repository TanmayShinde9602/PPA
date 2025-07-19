
class Demo extends Thread
{
    public void run()
    {
        System.out.println("Thread is Running with name :"+Thread.currentThread().getName());
        System.out.println("Thread Priority is :"+Thread.currentThread().getPriority());
    }

}

class ThreadDemo8
{
    public static void main(String A[]) throws Exception
    {
        System.out.println("Inside Main Thread :"+Thread.currentThread().getName());

        Demo dobj1 = new Demo();
        Thread tobj1 = new Thread(dobj1);
        tobj1.setName("PPA");
     //   tobj1.setPriority(10);    //by default Thread priority is 5
        tobj1.start();
    }
}
