import java.util.Scanner;

public class Palindrome
{
	public static void main(String[] args) 
	{
		int n,digit,rev=0,temp;
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter A Number:");
		n=sc.nextInt();
		temp=n;
		while(n!=0)
		{
			digit=n%10;
			rev=rev*10+digit;
			n=n/10;
		}	
		if(temp==rev)
			System.out.println("Number Is Palindrome.");
		else
			System.out.println("Number Is Not A Palindrome.");
	}
}