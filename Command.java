import java.lang.*;

class Command
{
    public static void main(String arg[])
    {
        System.out.println("First number is : "+arg[0]);
        System.out.println("Second number is : "+arg[1]);

        int ans= Integer.parseInt(arg[0])+Integer.parseInt(arg[1]);
        System.out.println("Sum is : "+ans);
    }
}

// javac Command.java
// java Command 10 11