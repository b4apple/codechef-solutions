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
	lli p;
	cin >> p;
	lli n = 0;
	for(int i = 11; p != 0;)
	{
		if(p >= (1<<i))
		{
			p -= (1<<i);
			++n;
		}
		else
		{
			--i;
		}
	}
	cout << n << nl;
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
