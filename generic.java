import java.lang.*;

import javax.lang.model.util.ElementScanner14;


class Arithmatic <T>
{
    public T Addition(T No1,T No2)
    {
        T Ans;

        if((No1 instanceof Integer) && (No2 instanceof Integer))
        {
            return  (T)(Integer)((Integer)No1 + (Integer)No2);
        }
        else if((No1 instanceof Float) && (No2 instanceof Float))
        {
            return  (T)(Float)((Float)No1 + (Float)No2);
        }
        else if((No1 instanceof Double) && (No2 instanceof Double))
        {
            return  (T)(Double)((Double)No1 + (Double)No2);
        }
        else
        {
            return null;
        }
        
    }
}
class generic
{
    public static void main(String arg[])
    {
        Arithmatic <Integer>obj=new Arithmatic<Integer>();
        Integer ret=0;
        ret=obj.Addition(10,11);
        System.out.println("Addition is : "+ret);

        Arithmatic <Float>obj1=new Arithmatic<Float>();
        Float ret2=0.0f;
        ret2=obj1.Addition(10.5f,11.9f);
        System.out.println("Addition is : "+ret2);
    }
}
