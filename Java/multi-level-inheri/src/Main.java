import java.util.*;
class employee
{
    String ename;
    int age;
    Scanner inp=new Scanner(System.in);
    void accept()
    {
        System.out.println("Enter name: ");
        ename=inp.nextLine();
        System.out.println("Enter age");
        age=inp.nextInt();
    }
}
class manager extends employee
{
    int salary;
    void accept_sal()
    {
        accept();
        System.out.println("Enter salary: ");
        salary=inp.nextInt();
    }
}
class dept extends manager
{
    String deptname;
    void accept_dept()
    {
        accept_sal();
        System.out.println("Enter deptname: ");
        deptname=inp.nextLine();
        deptname=inp.nextLine();
    }
    void show_all()
    {
        System.out.println(ename);
        System.out.println(age);
        System.out.println(salary);
        System.out.println(deptname);
    }
}
public class Main {
    public static void main(String[] args)
    {
        dept d=new dept();
        d.accept_dept();
        d.show_all();
    }
}
