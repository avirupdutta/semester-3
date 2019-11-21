import java.util.*;
class employee
{
    String ename;
    int ecode;
    Scanner inp=new Scanner(System.in);
    void accept()
    {
        System.out.println("Enter name: ");
        ename=inp.nextLine();
        System.out.println("Enter ecode: ");
        ecode=inp.nextInt();
    }
    void show()
    {
        System.out.println(ename);
        System.out.println(ecode);
    }
}
class manager extends employee
{
    int salary;
    void accept_s()
    {
        accept();
        System.out.println("Enter salary: ");
        salary=inp.nextInt();
    }
    void show_s()
    {
        show();
        System.out.println(salary);
    }
}
class worker extends employee
{
    int wages;
    void accept_w()
    {
        accept();
        System.out.println("Enter wages: ");
        wages=inp.nextInt();
    }
    void show_w()
    {
        show();
        System.out.println(wages);
    }
}
class apprentice extends worker
{
    int noofdays;
    void accept_a()
    {
        accept_w();
        System.out.println("Enter no. of days: ");
        noofdays=inp.nextInt();
    }
    void show_a()
    {
        show_w();
        System.out.println(noofdays);
    }
}
public class Main {
    public static void main(String[] args)
    {
        System.out.println("Manager class:");
        manager m=new manager();
        m.accept_s();
        System.out.println("Apprentice class: ");
        apprentice a=new apprentice();
        a.accept_a();
        System.out.println();
        m.show_s();
        a.show_a();
    }
}
