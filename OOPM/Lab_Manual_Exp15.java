import java.util.Scanner;

class Student
{
	int roll_no,age;
	String name;
	Student()
	{
		name="Raj";
		roll_no=10;
		age=20;
	}
	Student(int a,int b)
	{
		roll_no=a;
		age=b;
	}
	Student(int x,int y,String r)
	{
		roll_no=x;
		age=y;
		name=r;
	}
	public void display()
	{
		System.out.println("Name:"+name+"\nRoll No:"+roll_no+"\nAge:"+age);
	}
}
public class Lab_Manual_Exp15
{
	public static void main(String[] args) 
	{
		Student s = new Student();
		s.display();
		Student s1 = new Student(55,19);
		s1.display();
		Student s2 = new Student(40,18,"Rutik");
		s2.display();
	}
}