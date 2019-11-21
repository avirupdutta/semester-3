import java.util.*;
public class Main {
    public static void main(String[] args)
    {
        int n, sum = 0, temp, rem, digits = 0;
        Scanner inp = new Scanner(System.in);
        System.out.println("Input a number to check if it is an Armstrong number : ");
        n= inp.nextInt();
        temp=n;
        while (temp != 0)
        {
            digits++;
            temp = temp/10;
        }
        temp=n;
        while (temp != 0)
        {
            rem = temp%10;
            sum = sum + (int) Math.pow (rem, digits);
            temp = temp/10;
        }
        if (n == sum)
        {
            System.out.println(n + " is an Armstrong number.");
        }
        else
        {
            System.out.println(n + " isn't an Armstrong number.");
        }

    }
}
