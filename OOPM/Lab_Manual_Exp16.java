import java.util.Scanner;

class Menu
{
	int rev=0;
	public void reverse(int a)
	{
		if(a!=0)
		{
			rev=rev*10+(a%10);
			a=a/10;
			reverse(a);
		}
		else
		{
			System.out.println("Reverse:"+rev);
		}
	}
	public int series(int y)
	{
		if(y!=0)
			return (y+series(y-1));
		else
			return y;
	}
}

public class Lab_Manual_Exp16
{
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		Menu m = new Menu();
		int choice,x;
		System.out.print("1.Reverse A Number\n2.Sum Of Natural Numbers\nEnter Your Choice:");
		choice=sc.nextInt();
		switch(choice)
		{
			case 1: System.out.print("Enter A Number:");
					x=sc.nextInt();
					m.reverse(x);
					break;
			case 2: System.out.print("Enter A Number:");
					x=sc.nextInt();
					int z=m.series(x);
					System.out.println("Summation="+z);
					break;
		}	
	}
}