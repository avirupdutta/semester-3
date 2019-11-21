import mypack.reverse.*;
import mypack.*;
import java.util.*;
public class pack {
	public static void main(String[] args)
	{
		Scanner inp=new Scanner (System.in);
		facto f=new facto();
		rev r=new rev();
		System.out.println("Enter a number: ");
		int n=inp.nextInt();
		f.factorial(n);
		r.rev_no(n);
	}
}
