import java.util.*;
public class Main {
    public static void main(String[] args)
    {
        int i;
        int marks[]= new int[5];
        Scanner inp = new Scanner(System.in);
        for(i=0;i<marks.length;i++)
        {
            System.out.println("Enter the marks of student "+(i+1));
            marks[i]= inp.nextInt();
        }
        for(i=0;i<marks.length;i++)
        {
            System.out.println("The marks of student "+(i+1)+" is " + marks[i]);
        }
    }
}
