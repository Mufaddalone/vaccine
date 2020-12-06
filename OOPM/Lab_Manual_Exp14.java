import java.util.Scanner;

class Menu
{
	public int factorial(int n)
	{
		int fact=1;
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
		int count=0,digit,copy,sum=0;
		copy=a;
		while(a!=0)
		{
			count++;
			a/=10;
		}
		a=copy;
		while(a!=0)
		{
			digit=a%10;
			sum=sum+(int)Math.pow(digit,count);
			a/=10;
		}
		if(copy==sum)
			System.out.println(copy+" is an Armstrong Number");
		else
			System.out.println(copy+" is not an Armstrong Number");
	}
	public void palindrome(int a)
	{
		int rev=0,copy;
		copy=a;
		while(a>0)
		{
			rev=rev*10+(a%10);
			a=a/10;
		}
		if(copy==rev)
			System.out.println(copy+" is Palindrome");
		else
			System.out.println(copy+" is Not Palindrome");
	}
	public void prime(int a)
	{
		int i=2;
		while(a%i!=0)
			i++;
		if(a==i)
			System.out.println(a+" is Prime Number");
		else
			System.out.println(a+" is Not A Prime Number");
	}
	public void fibonacci(int a)
	{
		int n1=0,n2=1,i,next;
		System.out.println("Fibonacci Series:\n"+n1+"\n"+n2);
	    for (i=1;i<=a-2;i++)
    	{
        	next=n1+n2;
        	System.out.println(next);
        	n1=n2;
        	n2=next;
    	}
	}
}
public class Lab_Manual_Exp14
{
	public static void main(String[] args) 
	{
		int n,choice;
		Menu m = new Menu();
		Scanner sc = new Scanner(System.in);
		System.out.print("1.Factorial\n2.Reverse\n3.Test Armstrong\n4.Test Palindrome\n5.Test Prime\n6.Fibonacci Series\nEnter Your Choice:");
		choice=sc.nextInt();
		switch(choice)
		{
			case 1: System.out.print("Enter A Number:");
					n=sc.nextInt();
					int f=m.factorial(n);
					System.out.println("Factorial="+f);
					break;
			case 2: System.out.print("Enter A Number:");
					n=sc.nextInt();
					int r=m.reverse(n);
					System.out.println("Reverse="+r);
					break;
			case 3: System.out.print("Enter A Number:");
					n=sc.nextInt();
					m.armstrong(n);
					break;
			case 4: System.out.print("Enter A Number:");
					n=sc.nextInt();
					m.palindrome(n);
					break;
			case 5: System.out.print("Enter A Number:");
					n=sc.nextInt();
					m.prime(n);
					break;
			case 6: System.out.print("Enter the Number Of Terms:");
					n=sc.nextInt();
					m.fibonacci(n);
					break;
			default: System.out.println("Invalid Input");
					 break;
		}
	}
}