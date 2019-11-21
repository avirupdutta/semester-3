import java.util.*;
public class Main {
    public static void main(String[] args)
    {
        Scanner inp = new Scanner(System.in);
        int n, c, array[],odd[],even[],codd=0,ceven=0,osum=0,esum=0;
        System.out.println("Enter the number of elements: ");
        n=inp.nextInt();
        array= new int[n];
        odd= new int[n];
        even= new int[n];
        for (c = 0; c < n; c++)
        {
            System.out.println("Enter element "+(c+1)+":");
            array[c] = inp.nextInt();
            if(array[c]%2==0)
            {
                even[ceven]=array[c];
                ceven++;
                esum+=array[c];
            }
            if(array[c]%2!=0)
            {
                odd[codd]=array[c];
                codd++;
                osum+=array[c];
            }
        }
        System.out.println("Odd numbers in the array: ");
        for(c=0;c<codd;c++)
        {
            System.out.print(odd[c]+"\t");
        }
        System.out.println("\nNumber of odd numbers in the array: "+codd);
        System.out.println("Sum of odd numbers in the array: "+osum);
        System.out.println("Even numbers in the array: ");
        for(c=0;c<ceven;c++)
        {
            System.out.print(even[c]+"\t");
        }
        System.out.println("\nNumber of even numbers in the array: "+ceven);
        System.out.println("Sum of even numbers in the array: "+esum);
    }
}
