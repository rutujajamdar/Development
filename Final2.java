import java.lang.*;

class Base {
    public void fun() {
        System.out.println("Inside Base fun");
    }

    public final void gun() {
        System.out.println("Inside Base final gun");
    }

}

class Deriverd extends Base {
    public void fun() // Overriding
    {
        System.out.println("Inside Derived fun");
    }

    // public void gun() // Not allowed
    // {
    // System.out.println("Inside derived gun");
    // }

}

class Final2 {
    public static void main(String arr[]) {
        Derived dobj = new Derived();
        dobj.fun();  // Inside derived fun
        dobj.gun();  // Inside Base final gun

    }
}
