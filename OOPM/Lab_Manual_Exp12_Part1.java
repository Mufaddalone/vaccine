import java.util.Scanner;

public class Lab_Manual_Exp12_Part1
{
	public static void main(String[] args) 
	{
		int n1,n2,sqr;
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter Two Number's:");
		n1 = sc.nextInt();
		n2 = sc.nextInt();
		sqr=n1*n2;
		System.out.println("Square="+sqr);
	}
}