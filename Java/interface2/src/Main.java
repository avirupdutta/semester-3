interface A
{
    public void show_A();
}

interface B
{
    public void show_B();
}

class C implements A,B
{
    public void show_A()
    {
        System.out.println("This is of interface A");
    }
    public void show_B()
    {
        System.out.println("This is of interface B");
    }
}

public class Main {
    public static void main(String[] args)
    {
        C c1=new C();
        c1.show_A();
        c1.show_B();
    }
}
