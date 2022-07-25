import java.lang.*;

class Demo 
{
    public int Add(int i,int j)
    {
        return i+j;
    }

    public int Add(int i,int j,int k)
    {
        return i+j+k;
    }

    public int Add(int i,int j,int k,int z)
    {
        return i+j+k+z;
    }

    
    
}

class Overloading
{
    public static void main(String a[])
    {
        Demo obj=new Demo();

        System.out.println(obj.Add(10, 20));
        System.out.println(obj.Add(10, 20,90));
        System.out.println(obj.Add(10, 20,40,30));
    }
}
