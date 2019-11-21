import java.util.*;
interface Area
{
    float pi=(22/7);
    float cal(float a, float b);
}

class rectangle implements Area
{
    public float cal(float a, float b)
    {
        return (a*b);
    }
}

class cylinder implements Area
{
    public float cal(float a, float b)
    {
        return (pi*a*a*b);
    }
}
public class Main {
    public static void main(String[] args)
    {
        rectangle rec=new rectangle();
        cylinder c=new cylinder();
        Scanner inp=new Scanner(System.in);
        Area ar;
        ar= rec;
        System.out.println("Enter length of rectangle: ");
        float l=inp.nextFloat();
        System.out.println("Enter breadth of rectangle: ");
        float b=inp.nextFloat();
        System.out.println("The area of the rectangle is "+ar.cal(l,b));
        ar= c;
        System.out.println("Enter radius of the cylinder: ");
        float rad=inp.nextFloat();
        System.out.println("Enter height of the cylinder: ");
        float h=inp.nextFloat();
        System.out.println("The volume of the cylinder is "+ar.cal(rad,h));
    }
}
