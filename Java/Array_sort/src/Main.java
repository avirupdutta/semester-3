import java.util.*;
public class Main {
    public static void main(String[] args)
    {
        Scanner inp = new Scanner(System.in);
        int n, c, d, temp, array[],position;
        System.out.println("Enter the number of elements: ");
        n=inp.nextInt();
        array= new int[n];
        for (c = 0; c < n; c++)
        {
            System.out.println("Enter element "+(c+1)+":");
            array[c] = inp.nextInt();
        }
        for (c = 0; c < (n - 1); c++)
        {
            position = c;
            for (d = c + 1; d < n; d++)
            {
                if (array[position] > array[d])
                    position = d;
            }
            if (position != c)
            {
                temp = array[c];
                array[c] = array[position];
                array[position] = temp;
            }
        }
        System.out.println("Sorted array in ascending order: ");
        for (c = 0; c < n; c++)
        {
            System.out.println(array[c]);
        }
    }
}
