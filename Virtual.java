import java.lang.*;

class Base
{
    public int i,j;

    public void fun()  // Defination
    {
        System.out.println("Base fun");
    }

    public void gun()   // Defination
    {
        System.out.println("Base gun");
    }

    public void sun()   // Defination
    {
        System.out.println("Base sun");
    }
}

class Derived extends Base
{
    public int x,y;

    public void fun()  // Overrriding
    {
        System.out.println("Derived fun");
    }
    public void sun()  // Overrriding
    {
        System.out.println("Derived sun");
    }
    public void run()  //Defination
    {
        System.out.println("Derived run");
    }
}

class Virtual
{
    public static void main(String a[])
    {
        // Base bobj =new Base();   // No casting
        // Derived dobj = new Derived();// No casting

        Base obj = new Derived();  // Upcasting
        // Derived obj2 = new Base();  // Down casting

        obj.fun();
        obj.gun();
        obj.sun();
        // obj.run();
    }
}
