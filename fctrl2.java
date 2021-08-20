import java.util.Scanner;
import java.math.BigInteger;
class fctrl2
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		int t = sc.nextInt();
		BigInteger dp[] = new BigInteger[101];
		dp[0] = new BigInteger("1");
		for(int i = 1; i < 101; i++)
			dp[i] = BigInteger.valueOf(i).multiply(dp[i-1]);
		for(int i = 0; i < t; i++)
		{
			int k = sc.nextInt();
			System.out.println(dp[k]);
		}
	}
}
