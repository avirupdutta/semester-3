package mypack;
public class facto {
	public static void factorial(int n)
	{
		int i=0,f=1;
		for(i=1;i<=n;i++)
		{
			f=f*i;
		}
		System.out.println("Factorial is "+ f);
	}
}
