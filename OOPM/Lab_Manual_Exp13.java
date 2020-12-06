import java.util.Scanner;

public class Lab_Manual_Exp13
{
	public static void main(String[] args) 
	{
		int count,i;
		String s1,s2 = "";
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter A String:");
		s1 = sc.nextLine();
		count = s1.length();
		for(i = count-1; i >= 0; i--)
			s2 = s2 + s1.charAt(i);
		if(s1.equals(s2))
			System.out.println("Palindrome");
		else
			System.out.println("Not Palindrome");
	}
}