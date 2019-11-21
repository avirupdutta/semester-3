public class Main {
    public static class box
    {
        int l,b;
        void accept(int x)
        {
            l=b=x;
        }
        void accept(int x,int y)
        {
            l=x;
            b=y;
        }
        void show()
        {
            int area=l*b;
            System.out.println("The area is:"+area);
        }
    }
    public static void main(String[] args)
    {
        box b1= new box();
        box b2= new box();
        b1.accept(7,3);
        b2.accept(10);
        b1.show();
        b2.show();
    }
}
