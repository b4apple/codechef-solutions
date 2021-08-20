import java.util.Scanner;
class flow007
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		for(int i = 0; i < t; i++)
		{
			System.out.println(
					new StringBuffer(sc.nextLine()
				).reverse().toString()
			);
		}
	}
}
