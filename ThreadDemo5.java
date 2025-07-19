class Demo extends Thread
{
    public void run()
    {
        System.out.println("Thread is Running with name :"+Thread.currentThread().getName());
        int i =0;
        for(i = 1; i<= 100; i++)
        {
            System.out.println(Thread.currentThread().getName() + "with ID :"+ i);
        }
    }

}

class ThreadDemo5
{
    public static void main(String A[])
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
    }
}
//ithe aapn don thread tayar kele aani tyana naav dile PPA,LB.
//dogahi thread he run() method madhe jaun je logic lihilay te execute kratil 
//aani donhi pn thread he simultaneousaly(PARALLEL) krnar
//execute kelya vr bg aapn aadhi ppa thraed tyar kel mhanun aadhi ppa mg 
//nanter LB aas nahi dogh thread sobat run hotat

//aani dogh aashe vegvegale run hotat mhanaje PPA ch o/p eka bajula ani
//aani LB ch eka bajula pn te console vr display hotana ektra display hot 

//nahi tr aaplyala vatetl ki 1 line PPA ch execute hot ani ekline LB ch pn
//tas nahi hot 