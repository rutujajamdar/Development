import java.lang.*;

interface Circle
{
     float PI = 3.14f;  // public static final PI = 3.14f;

     float CaculateArea(float Radius);  // public abstract float CaculateArea(float Radius);
     float CalculateCircumferance(float Radius);  //      float abstract CalculateCircumferance(float Radius);
}

class Area implements Circle
{
    public float CaculateArea(float Radius)
    {
        return(PI*Radius*Radius);
    }
    public float CalculateCircumferance(float Radius)
    {
        return(2*PI*Radius);
    }
    


}
class Marvellous1
{
    public static void main(String arg[])
    {
        System.out.println("Value of PI : "+Circle.PI);
        // Circle.PI= 6.14f;
        Area obj = new Area();
        float fRet = 0.0f;

        fRet=obj.CaculateArea(10.5f);
        System.out.println("Area of circle : "+fRet);

        fRet=obj.CalculateCircumferance(10.5f);
        System.out.println("Circumferance : "+fRet);
    }
}
