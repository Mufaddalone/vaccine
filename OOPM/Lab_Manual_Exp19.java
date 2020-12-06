public class Lab_Manual_Exp19
{
	public static void main(String[] args) 
	{
		StringBuffer sb1 = new StringBuffer(args[0]);
		StringBuffer sb2 = new StringBuffer(args[1]);
		sb1.append(sb2);
		System.out.println(sb1);
		sb1.insert(0,"Hii ");
		System.out.println(sb1);
		sb1.replace(9,15," Rutik");
		System.out.println(sb1);
		sb1.delete(0,4);
		System.out.println(sb1);
		sb1.reverse();
		System.out.println(sb1);
		System.out.println(sb2.capacity());
		sb1.ensureCapacity(20);
		System.out.println(sb1.capacity());
		System.out.println(sb1.charAt(2));
		System.out.println(sb2.length());
		System.out.println(sb1.substring(2));
	}
}