class MyException extends Exception
{
    String str1;
    MyException(String str2)
    {
        str1=str2;
    }
    public String toString()
    {
        return ("My Exception Occured:"+str1);
    }
}

public class Main {
    public static void main(String[] args)
    {
        try {
            System.out.println("Starting of my block");
            throw new MyException("this is my error message");
        }
        catch (MyException exp)
        {
            System.out.println("catch block");
            System.out.println(exp);
        }
    }
}
