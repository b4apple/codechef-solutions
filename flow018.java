import java.util.Scanner;
import java.math.BigInteger;
class flow018
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		int t = sc.nextInt();
		BigInteger dp[] = new BigInteger[21];
		dp[0] = BigInteger.valueOf(0);
		for(int i = 1; i <= 20; i++)
			dp[i] = dp[i - 1].multiply(BigInteger.valueOf(i));
		for(int i = 0; i < t; i++)
		{
			int k = sc.nextInt();
			System.out.println(dp[k]);
		}
	}
}
