//Method 1
import java.util.Scanner;

class Complex
{
	private float x,y;
	public void get()
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter Real And Imaginary Values:");
		x=sc.nextFloat();
		y=sc.nextFloat();
	} 
	public Complex add(Complex a,Complex b)
	{
		Complex t = new Complex();
		t.x=a.x+b.x;
		t.y=a.y+b.y;
		return t;
	}
	public void display()
	{
		System.out.println(x+"+j"+y);
	}
}
public class AddComplex
{
	public static void main(String[] args) 
	{
		Complex c1 = new Complex();
		Complex c2 = new Complex();
		c1.get();
		c2.get();
		c1.display();
		c2.display();
		Complex c3 = new Complex();
		c3=c3.add(c1,c2);
		c3.display();
	}
}
//Method 2
/*
class Complex
{
	private float x,y;
	public void get()
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter Real And Imaginary Values:");
		x=sc.nextFloat();
		y=sc.nextFloat();
	} 
	public Complex add(Complex a)
	{
		Complex t = new Complex();
		t.x=x+a.x;
		t.y=y+a.y;
		return t;
	}
	public void display()
	{
		System.out.println(x+"+j"+y);
	}
}
public class AddComplex
{
	public static void main(String[] args) 
	{
		Complex c1 = new Complex();
		Complex c2 = new Complex();
		c1.get();
		c2.get();
		c1.display();
		c2.display();
		Complex c3 = new Complex();
		c3=c1.add(c2);
		c3.display();
	}
}*/
