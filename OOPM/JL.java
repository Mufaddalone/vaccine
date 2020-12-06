import java.util.Scanner;

class Menu
{
	long factorial(int n)
	{
		long fact=1;
		for(int i=1;i<=n;i++)
			fact*=i;
		return fact;
	}
	int reverse(int n)
	{
		int rev=0;
		while(n>0)
		{
			rev=rev*10+(n%10);
			n=n/10;
		}
		return rev;
	}
}
public class JL
{
	public static void main(String[] args) 
	{
		int n,choice;
		Menu m = new Menu();
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter A Number:");
		n=sc.nextInt();
		do
		{
			System.out.print("1.Factorial\n2.Reverse\n3.Exit\nEnter Your Choice:");
			choice=sc.nextInt();
			switch(choice)
			{
				case 1: long f=m.factorial(n);
						System.out.println("Factorial="+f);
						break;
				case 2: int r=m.reverse(n);
						System.out.println("Reverse="+r);
						break;
				case 3: break;
			}
		}while(choice!=3);
	}
}