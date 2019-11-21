import java.util.*;
interface employee
{
    void accept();
}

class Manager implements employee
{
    int salary;
    String name="",ecode="";
    Scanner inp=new Scanner(System.in);
    public void accept()
    {
        System.out.println("Enter the name: ");
        name= inp.nextLine();
        System.out.println("Enter the ecode: ");
        ecode= inp.nextLine();
        System.out.println("Enter the salary: ");
        salary= inp.nextInt();
    }
    void show()
    {
        System.out.println(name);
        System.out.println(ecode);
        System.out.println(salary);
    }
}
class Worker implements employee
{
    int wages;
    String name="",ecode="";
    Scanner inp=new Scanner(System.in);
    public void accept()
    {
        System.out.println("Enter the name: ");
        name= inp.nextLine();
        System.out.println("Enter the ecode: ");
        ecode= inp.nextLine();
        System.out.println("Enter the wages: ");
        wages= inp.nextInt();
    }
    void show()
    {
        System.out.println(name);
        System.out.println(ecode);
        System.out.println(wages);
    }
}
public class Main {
    public static void main(String[] args)
    {
        Manager m=new Manager();
        m.accept();
        m.show();
        Worker w=new Worker();
        w.accept();
        w.show();
    }
}
