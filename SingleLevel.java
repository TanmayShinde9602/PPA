import javax.swing.text.StyledEditorKit.StyledTextAction;

class Base 
{
    public int A,B;

    public Base()
    {
        System.out.println("Inside the Base Constructor");

    }

    public void Fun()
    {
        System.out.println("Inside the Base Fun");
    }
}   

class Derived extends Base
{
    public Derived()
    {
        System.out.println("Inside the Derived constructor");
    }
      
    public void Gun()
    {
        System.out.println("Inside the Derived Gun");
    } 
}
class SingleLevel
{
    public static void main(String Args[])
    {
        System.out.println("Inside the Main");

        Derived dobj = new Derived();

        dobj.Fun();
        dobj.Gun();
    }
}
/* 
 Output
 inside main 
tyachya no. aapn Derived cha object create kela mg derived cha constructor call hoil
aas vatel pn child class la derived chya property pn bhetate na mg control aadhi base class
la jail ani mg base cha constructor call hoil mg pudhe 
 */