//Multiplication is remaining
import java.util.Scanner;

class Matrix
{
	int i,j,k;
	Scanner sc = new Scanner(System.in);
	public void get(int a[][],int m,int n)
	{
		for(i=0;i<=m-1;i++)
		{
			for(j=0;j<=n-1;j++)
			{
				System.out.print("Enter Value:");
				a[i][j] = sc.nextInt();
			}
		}
	}
	public int[][] add(int a[][],int b[][],int x,int y)
	{
		int c[][] = new int[x][y];
		for(i=0;i<=x-1;i++)
		{
			for(j=0;j<=y-1;j++)
			{
				c[i][j]=a[i][j]+b[i][j];
			}
		}
		return c;	
	}
	public int[][] multiply(int a[][],int b[][],int m,int n,int p)
	{
		int c[][] = new int[m][p];
		for(i=0;i<=m-1;i++)
		{
			for(j=0;j<=p-1;j++)
			{
				c[i][j]=0;
				for(k=0;k<=n-1;k++)
				{
					c[i][j]=c[i][j]+a[i][k]*b[k][j];
				}
			}
		}
		return c;
	}
	public void display(int a[][],int x,int y)
	{
		for(i=0;i<=x-1;i++)
		{
			for(j=0;j<=y-1;j++)
			{
				System.out.print(a[i][j]+"\t");
			}
			System.out.println();
		}	
	}
}

public class Lab_Manual_Exp17
{
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		Matrix m = new Matrix();
		int choice,q,n,p;
		System.out.print("1.Addition of Matrix\n2.Multiplication of Matrix\nEnter Your Choice:");
		choice=sc.nextInt();
		switch(choice)
		{
			case 1: System.out.print("Enter Number of rows and columns:");
					q=sc.nextInt();
					n=sc.nextInt();
					int a[][] = new int[q][n];
					int b[][] = new int[q][n];
					System.out.println("Matrix A");
					m.get(a,q,n);
					System.out.println("Matrix B");
					m.get(b,q,n);
					int c[][] = m.add(a,b,q,n);
					System.out.println("Matrix A");
					m.display(a,q,n);
					System.out.println("Matrix B");
					m.display(b,q,n);
					System.out.println("Sum Matrix:");
					m.display(c,q,n);
					break;
			case 2: System.out.print("Enter Number of rows and columns for Matrix A:");
					q=sc.nextInt();
					n=sc.nextInt();
					System.out.print("Enter Number of columns for Matrix B:");
					p=sc.nextInt();
					int d[][] = new int[q][n];
					int e[][] = new int[n][p];
					System.out.println("Matrix A");
					m.get(d,q,n);
					System.out.println("Matrix B");
					m.get(e,n,p);
					int f[][] = m.multiply(d,e,q,n,p);
					System.out.println("Matrix A:");
					m.display(d,q,n);
					System.out.println("Matrix B:");
					m.display(e,n,p);
					System.out.println("Product Matrix:");
					m.display(f,q,p);
					break;
		}			
	}
}