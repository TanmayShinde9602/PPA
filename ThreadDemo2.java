class Demo extends Thread
{
    public void run()
    {
        System.out.println("Thread is Running");
    }

}

class ThreadDemo2
{
    public static void main(String A[])
    {
        System.out.println("Inside Main Thread");

        Demo dobj = new Demo();
        Thread tobj = new Thread(dobj);

        tobj.start();
    }

}

// Thread ha 2 type ni tyar krtat 
// hyat aapn MAIN Thread shivay ek new thread create kelay by inhereting the 
// Thread class. Thread class ha in build class aahe java madhe. 
