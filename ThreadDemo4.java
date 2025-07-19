class Demo extends Thread
{
    public void run()
    {
        System.out.println("Thread is Running with name :"+Thread.currentThread().getName());
    }

}

class ThreadDemo4
{
    public static void main(String A[])
    {
        System.out.println("Inside Main Thread :"+Thread.currentThread().getName());

        Demo dobj = new Demo();
        Thread tobj = new Thread(dobj);
        tobj.setName("PPA");

        tobj.start();
    }

}
//ith aaapn create kelelya thread la name dil