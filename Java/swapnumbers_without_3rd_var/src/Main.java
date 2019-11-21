import java.util.*;
public class Main {
    public static void main(String[] args)
    {
        Scanner inp= new Scanner(System.in);
        System.out.println("Enter first number:");
        int a= inp.nextInt();
        System.out.println("Enter second number:");
        int b= inp.nextInt();
        a=((a*b)/(b=a));
        System.out.println("First number is: "+a);
        System.out.println("Second number is: "+b);
    }
}
