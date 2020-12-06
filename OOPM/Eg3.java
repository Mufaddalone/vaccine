import java.util.Scanner;

class Rectangle{
	int l,b;
	Rectangle() //Default Constructor
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter Lenght and Breadth:");
		l=sc.nextInt();
		b=sc.nextInt();
	} 
	Rectangle(int a,int c) //Parameterized Constructor
	{
		l=a;
		b=c;
	}
	public int Area()
	{
		return (l*b);
	}
	public int Perimeter()
	{
		return (2*(l+b));
	}
}

public class Eg3
{
	public static void main(String[] args) 
	{
		Rectangle rect = new Rectangle();
		System.out.println("Area="+rect.Area());
		System.out.println("Perimeter="+rect.Perimeter());
		Rectangle rect1 = new Rectangle(10,20);
		System.out.println("Area="+rect1.Area());
		System.out.println("Perimeter="+rect1.Perimeter());
	}
}