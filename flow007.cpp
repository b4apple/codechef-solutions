#include<bits/stdc++.h>

using namespace std;

#define lli long long int
#define vi vector<int>
#define nl "\n"

void start()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);	
}

void solve()
{
	lli k;
	lli r = 0;
	cin >> k;
	while(k != 0)
	{
		lli d = k % 10;
		r = r * 10 + d;
		k = k / 10; 
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
