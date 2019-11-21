import java.util.*;
public class Main {
    public static class rectangle{
        int l,b;
        void accept()
        {
            Scanner inp= new Scanner(System.in);
            System.out.println("Enter length of the rectangle: ");
            l= inp.nextInt();
            System.out.println("Enter breadth of the rectangle: ");
            b= inp.nextInt();
        }
        void show()
        {
            int area=l*b;
            System.out.println("The area of the rectangle is: "+area);
        }
    }
    public static void main(String[] args)
    {
        rectangle r= new rectangle();
        r.accept();
        r.show();
    }
}
