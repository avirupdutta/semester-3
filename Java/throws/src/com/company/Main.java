import java.io.*;
class M
{
    void method() throws IOException
    {
        throw new IOException("Device error!");
    }
}
public class Main {
    public static void main(String[] args) throws IOException
    {
        M m= new M();
        m.method();
        System.out.println("Normal flow!..");
    }
}
