public class InDigits
{
	public static void main(String[] args) 
	{
		int n,r;
		n=Integer.parseInt(args[0]);
		while(n>0)
		{
			r=n%10;
			System.out.println(r);
			n=n/10;
		}
	}
}
