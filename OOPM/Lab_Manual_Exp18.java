import java.util.*;

public class Lab_Manual_Exp18
{
	public static void main(String[] args) 
	{
		int n;
		String s;
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter number of elements in vector:");
		n=sc.nextInt();
		Vector<String> v = new Vector<String>(n);
		v.add("Rutik");
		v.add("Yerunkar");
		v.add("ECS");
		v.add("Venice");
		System.out.println("Initial Content:"+v);
		if(v.contains("Venice"))
		{
			v.remove("Venice");
			System.out.println("Final Content:"+v);
		}
		else
		{
			v.add("Venice");
			System.out.println("Final Content:"+v);
		}
	}
}