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

class DerivedX extends Derived
{
    public int P,Q;

    public DerivedX()
    {
         System.out.println("Inside the DerivedX constructor ");
    }

    public void Sun()
    {
        System.out.println("Inside the DerivedX Sun ");
    }
}
class MultiLevel
{
    public static void main(String Args[])
    {
        System.out.println("Inside the Main");

        DerivedX dobj = new DerivedX();
        
        dobj.Fun();
        dobj.Gun();
        dobj.Sun();
    }
}
