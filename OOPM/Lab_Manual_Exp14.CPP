import java.util.Scanner;

class Menu
{
	public long factorial(int n)
	{
		long fact=1;
		for(int i=1;i<=n;i++)
			fact*=i;
		return fact;
	}
	public int reverse(int n)
	{
		int rev=0;
		while(n>0)
		{
			rev=rev*10+(n%10);
			n=n/10;
		}
		return rev;
	}
	public void armstrong(int a)
	{

	}
}
public class Lab_Manual_Exp14
{
	public static void main(String[] args) 
	{
		int n,choice;
		Menu m = new Menu();
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter A Number:");
		n=sc.nextInt();
		System.out.print("1.Factorial\n2.Reverse\n3.Armstrong\n4.Exit\nEnter Your Choice:");
		choice=sc.nextInt();
		switch(choice)
		{
			case 1: long f=m.factorial(n);
					System.out.println("Factorial="+f);
					break;
			case 2: int r=m.reverse(n);
					System.out.println("Reverse="+r);
					break;
			case 3: m.armstrong(n);
					break;
				
			case 4: break;
		}
	}
}