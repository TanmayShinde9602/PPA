import Marvellous.Circle;
import Marvellous.Infosystems.Square;

class PackageDemo
{
    public static void main(String Args[]) 
   {
        Circle cobj = new Circle();
        float ans = 0.0f;

        ans = cobj.CircleArea(10.5f);

        System.out.println("Area of circle is :"+ans);
        
        Square sobj = new Square();
        sobj.SquareArea(10);   
    }
}