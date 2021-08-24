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

void solve()
{
	lli n;
	lli k = 0;
	cin >> n;
	const lli d[] = {1, 2, 5, 10, 50, 100};
	for(int i = 5; n != 0;)
	{
		if(n >= d[i])
		{
			n -= d[i];
			++k;
		}
		else
		{
			--i;
		}
	}	
	cout << k << nl;
}

int main()
{
	start();
	int T;
	cin >> T;
	while(T--)
	{
		solve();
	}
	return 0;
}
