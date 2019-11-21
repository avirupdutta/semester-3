package mypack.reverse;
public class rev {
	public static void rev_no(int n)
	{
		int rev=0,r,temp;
		temp=n;
		while(temp>0)
		{
			r=temp%10;
			rev=(rev*10)+r;
			temp=temp/10;
		}
		System.out.println("Reverse of "+n+" is "+ rev);
	}
}
