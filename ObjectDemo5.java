class Student 
{
   public String Name ;
   public int Age ;
   public int Marks ;
    
   public Student(String A, int B, int  C)
   {
    this.Name = A;
    this.Age = B;
    this.Marks = C;
   }
   public String toString()
   {
      System.out.println("Inside the ToString Method");
      return Name+" "+Age+" "+Marks;
   }

}

 class ObjectDemo5
 {
    public static void main(String A[])
    {
        
        Student sobj = new Student("SAGAR",21,90);
        System.out.println(sobj);
    }
 }