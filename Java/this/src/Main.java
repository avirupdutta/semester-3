import java.util.*;
class Box
{
    int l,b;
    Box()
    {
        l=10;
        b=20;
    }
    Box(int x,int y)
    {
        l=x;
        b=y;
    }
    void change(Box obj)
    {
        this.l=obj.l;
        this.b=obj.b;
    }
    void show()
    {
        System.out.println("Length: "+l+"\nBreadth: "+b);
    }
}
public class Main {
    public static void main(String[] args)
    {
        Scanner inp=new Scanner(System.in);
        Box b1=new Box();
        System.out.println("Before function call of obj1");
        b1.show();
        System.out.println("Enter length : ");
        int l=inp.nextInt();
        System.out.println("Enter breadth : ");
        int b=inp.nextInt();
        Box b2=new Box(l,b);
        System.out.println("Before function call of obj2");
        b2.show();
        b2.change(b1);
        System.out.println("After function call change");
        b2.show();
    }
}
