import java.util.Scanner;

class Time
{
	int hr,min,sec;
	public void get()
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter hours,mins and secs:");
		hr=sc.nextInt();
		min=sc.nextInt();
		sec=sc.nextInt();
	}
	public Time add(Time t)
	{
		Time x = new Time();
		x.sec=sec+t.sec;
		if(x.sec>59)
		{
			x.min++;
			x.sec-=60;
		}
		x.min=min+t.min;
		if(x.sec>59)
		{
			x.hr++;
			x.min-=60;
		}
		x.hr=hr+t.hr;
		if(x.hr>=24)
		{
			x.hr=x.min=x.sec=0;
		}
		return x;
	}
	public void display()
	{
		System.out.println(hr+" : "+min+" : "+sec);
	}
}
public class AddTime
{
	public static void main(String[] args) 
	{
		Time t1 = new Time();
		Time t2 = new Time();
		Time t3 = new Time();
		t1.get();
		t2.get();
		t1.display();
		t1.display();
		t3=t1.add(t2);
		t3.display();
	}
}