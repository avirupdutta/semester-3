import java.util.*;
public class Main {
    public static class square{
        int s;
        void accept()
        {
            Scanner inp= new Scanner(System.in);
            System.out.println("Enter length of the side of the square: ");
            s= inp.nextInt();
        }
        void show()
        {
            int area=s*s;
            System.out.println("The area of the rectangle is: "+area);
        }
    }
    public static void main(String[] args)
    {
        square s= new square();
        s.accept();
        s.show();
    }
}
