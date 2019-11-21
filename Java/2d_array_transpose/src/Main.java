import java.util.*;
public class Main {
    public static void main(String[] args)
    {
        Scanner inp = new Scanner(System.in);
        int i,j, row, col, array[][],transpose[][];
        System.out.println("Enter the number of rows of the 2D array: ");
        row= inp.nextInt();
        System.out.println("Enter the number of columns of the 2D array: ");
        col= inp.nextInt();
        array= new int[row][col];
        System.out.println("Enter the elements of the 2D array:");
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                System.out.println("Enter element ( "+i+" , "+j+" ): ");
                array[i][j] = inp.nextInt();
            }
        }
        transpose = new int[col][row];
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                transpose[j][i] = array[i][j];
            }
        }
        System.out.println("Transpose of the 2D array is: ");
        for (i = 0; i < col; i++)
        {
            for (j = 0; j < row; j++)
            {
                System.out.print(transpose[i][j]+"\t");
            }
            System.out.print("\n");
        }
    }
}
