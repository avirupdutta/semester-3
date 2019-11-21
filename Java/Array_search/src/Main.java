import java.util.*;
public class Main {
    public static void main(String[] args)
    {
        Scanner inp = new Scanner(System.in);
        int c, count=0, n, search, array[];
        System.out.println("Enter number of elements: ");
        n=inp.nextInt();
        array= new int[n];
        for (c = 0; c < n; c++)
        {
            System.out.println("Enter element "+(c+1)+":");
            array[c] = inp.nextInt();
        }
        System.out.println("Enter value to find: ");
        search = inp.nextInt();
        for (c = 0; c < n; c++)
        {
            if (array[c] == search)
            {
                count++;
            }
        }
        if(count==0)
        {
            System.out.println(search + " isn't present in the array.");
        }
        else
        {
            System.out.println(search + " is present in the array " + count  + " times.");
        }
    }
}
