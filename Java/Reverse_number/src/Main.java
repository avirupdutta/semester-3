import java.util.Scanner;
public class Main {
    public static void main(String[] args)
    {
        int n, reverse = 0;
        System.out.println("Enter an integer to reverse");
        Scanner inp = new Scanner(System.in);
        n = inp.nextInt();
        while(n != 0)
        {
            reverse = (reverse*10) + n%10;
            n = n/10;
        }
        System.out.println("Reverse of the number is " + reverse);
    }
}
