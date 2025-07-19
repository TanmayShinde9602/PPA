class StringDemo2
{   
    public static void main(String A[])   
    {
 
        StringBuffer s1 = new StringBuffer("Marvellous");  //stringBuffer he edit hou shakto karan aadhi aapan Marvellous lihil nantr mg Infosystem dil
        StringBuilder s2 = new StringBuilder("Marvellous");

        s1.append("Infosystem");
        s2.append("Infosystem");

        System.out.println(s1);
    }

}