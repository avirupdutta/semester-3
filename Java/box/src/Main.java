class Box
{
    int l,b;
    static int count;
    Box(int x,int y)
    {
        l=x;
        b=y;
        count++;
    }
    void show()
    {
        System.out.println("Length "+ l);
        System.out.println("Breadth "+ b);
    }
    static void countobj()
    {
        System.out.println("Total object created " + count);
    }
}
public class Main {
    public static void main(String[] args)
    {
        Box b1=new Box(3,5);
        b1.show();
        Box b2=new Box(13,15);
        b2.show();
        Box.countobj();
    }
}
