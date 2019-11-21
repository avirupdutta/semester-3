import java.util.*;
public class Main {
    public static class employee
    {
        String ename;
        int age,salary;
        //public static int count=0;
        employee()
        {
            ename="";
            age=0;
            salary=0;
        }
        employee(String n,int a,int s)
        {
            ename=n;
            age=a;
            salary=s;
            //count++;
        }
        void show()
        {
            System.out.println("Name: "+ename+"\nAge: "+age+"\nSalary :"+salary);
        }
    }
    public static void main(String[] args)
    {
        Scanner inp=new Scanner(System.in);
        int n,i,age,salary;
        String name;
        System.out.println("Enter number of employees: ");
        n= inp.nextInt();
        employee obj[]= new employee[n];
        for (i=0;i<n;i++)
        {
            System.out.println("\nEnter name of the employee "+(i+1)+":");
            name= inp.nextLine();
            name= inp.nextLine();
            System.out.println("Enter age of the employee "+(i+1)+":");
            age=inp.nextInt();
            System.out.println("Enter salary of the employee "+(i+1)+":");
            salary=inp.nextInt();
            obj[i]= new employee(name,age,salary);
        }
        for(i=0;i<n;i++)
        {
            System.out.println("Details of employee "+(i+1)+":");
            obj[i].show();
        }
        //System.out.println("\nTotal number of employees: "+obj[0].count);
    }
}
