import java.util.*;
public class Main {
    public static void main(String[] args)
    {
        Scanner inp = new Scanner(System.in);
        int n, c, array[];
        System.out.println("Enter the number of elements: ");
        n=inp.nextInt();
        array= new int[n];
        for (c = 0; c < n; c++)
        {
            System.out.println("Enter element "+(c+1)+":");
            array[c] = inp.nextInt();
        }
        System.out.println("Array in reverse order: ");
        for (c = n-1; c >= 0; c--)
        {
            System.out.println(array[c]);
        }
    }
}
