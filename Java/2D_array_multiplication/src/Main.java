import java.util.*;
public class Main {
    public static void main(String[] args)
    {
        Scanner inp = new Scanner(System.in);
        int m, n, p, q, sum = 0, i, j, k, first[][], second[][],multiply[][];
        System.out.println("Enter the number of rows of the first array: ");
        m= inp.nextInt();
        System.out.println("Enter the number of columns of the first array: ");
        n= inp.nextInt();
        first= new int[m][n];
        System.out.println("Enter the elements of the first array:");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                System.out.println("Enter element ( "+i+" , "+j+" ): ");
                first[i][j] = inp.nextInt();
            }
        }
        System.out.println("Enter the number of rows of the second array: ");
        p= inp.nextInt();
        System.out.println("Enter the number of columns of the second array: ");
        q= inp.nextInt();
        if (n != p)
        {
            System.out.println("The arrays can't be multiplied with each other.");
        }
        else {
            second= new int[p][q];
            multiply= new int[m][q];
            System.out.println("Enter the elements of the second array:");
            for (i = 0; i < m; i++)
            {
                for (j = 0; j < n; j++)
                {
                    System.out.println("Enter element ( "+i+" , "+j+" ): ");
                    second[i][j] = inp.nextInt();
                }
            }
            for (i = 0; i < m; i++)
            {
                for (j = 0; j < q; j++)
                {
                    for (k = 0; k < p; k++)
                    {
                        sum = sum + first[i][k]*second[k][j];
                    }
                    multiply[i][j] = sum;
                    sum = 0;
                }
            }
            System.out.println("Product of the arrays:");
            for (i = 0; i < m; i++)
            {
                for (j = 0; j < q; j++)
                {
                    System.out.print(multiply[i][j]+"\t");
                }
                System.out.print("\n");
            }
        }
    }
}
