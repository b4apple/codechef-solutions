#include<bits/stdc++.h>

using namespace std;

#define lli long long int
#define vi vector<int>
#define nl "\n"
#define pb push_back



void start()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);	
}


int main()
{
	start();
	int T;
	cin >> T;
	int d = -10000;
	int a = 0, b = 0, k = 0;
	while(T--)
	{
		int p, q;
		cin >> p >> q;
		a += p;
		b += q;  
		if (abs(a - b) > d)
		{
			if (a > b)
			{
				k = 1;
			}
			else if (a < b)
			{
				k = 2;
			}
			d = abs(a - b);
		}
	}
	cout << k << " " << d << nl;
	return 0;
}
