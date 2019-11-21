public class Main {
    public static void pattern1()
    {
        int k=1,i,j;
        for(i=0;i<4;i++)
        {
            for(j=0;j<=i;j++)
            {
                System.out.print(k+"\t");
                k++;
            }
            System.out.println();
        }
    }
    public static void pattern2()
    {
        int i,j,k,n=8;
        for(i=0;i<=4;i++)
        {
            for(j=0;j<i;j++)
            {
                System.out.print(" ");
            }
            for(k=n;k>=0;k--)
            {
                System.out.print("*");
            }
            n-=2;
            System.out.println();
        }
    }
    public static void pattern3()
    {
        int i,j,k,l,n;
        for(i=0;i<=4;i++)
        {
            for (j=0;j<(4-i);j++)
            {
                System.out.print(" ");
            }
            for (k=0,n=i;k<=i;k++)
            {
                n++;
                System.out.print(n);
            }
            for(l=0;l<i;l++)
            {
                n--;
                System.out.print(n);
            }
            System.out.println();
        }
    }
    public static void main(String[] args)
    {
        pattern1();
        pattern2();
        pattern3();
    }
}
