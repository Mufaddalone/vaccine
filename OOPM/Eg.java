class Student
{
	String name;
	int roll_no;	
}
public class Eg
{
	public static void main(String[] args) 
	{
		Student s = new Student();
		s.name="John";
		s.roll_no=2;
		System.out.println("Name:"+s.name+"\nRoll No:"+s.roll_no);
	}
}

