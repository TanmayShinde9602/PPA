class WrapperDemo
{
    public static void main(String Arg[])
    {
        int no1 = 11;            //ithe aapn wrapper class nahi dila pn internally te automatic 
                                 //wrapper class ghet. 
        Integer no2 = 11;        // ithe aapn wrapper clas dilay..

        System.out.println(no1);
        System.out.println(no2);

        int x = no2;        // Auto Unboxing   Ata ithe no2 che content x madhe taknya sthi aadhi aaplyala Integer ha wrapper kholun(UNBOXING) tyach integer no2 aahe
                            //tyache content x madhe takata yeil. 
        System.out.println(x);
        
        Integer y = no1;    // Auto Boxing  ithe no1 che content he wraapper madhlya y madhe takayche aahe 
        System.out.println(y);
    }
}

/*
    Premitive Data type         Wrapper class

1       boolean                 Boolean
2       byte                    Byte
3       char                    Character
4       short                   Short
5       int                     Integeer
6       float                   Float
7       double                  Double
8       long                    Long


*/