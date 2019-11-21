class A implements Runnable
{
    public void run()
    {
        for(int i=0;i<10;i++)
        {
            System.out.println("A Thread: i= "+i);
            try
            {
                Thread.sleep(5000);
            }
            catch (InterruptedException ie)
            {
                System.out.println("A Thread interrupted! "+ie);
            }
        }
        System.out.println("A Thread finished!");
    }
}

class B implements Runnable
{
    public void run()
    {
        for(int j=10;j>=1;j--)
        {
            System.out.println("B Thread: j= "+j);
            try
            {
                Thread.sleep(5000);
            }
            catch (InterruptedException ie)
            {
                System.out.println("B Thread interrupted! "+ie);
            }
        }
        System.out.println("B Thread finished!");
    }
}
public class Main {
    public static void main(String[] args)
    {
        A a1=new A();
        B b1=new B();
        Thread t1=new Thread(a1);
        Thread t2=new Thread(b1);
        t1.start();
        t2.start();
    }
}
