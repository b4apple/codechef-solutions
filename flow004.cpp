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
	lli inp;
	cin >> inp;
	lli sum = inp % 10;
	int ld = 0;
	lli bkp = inp;
	while(bkp != 0)
	{
		ld = bkp % 10;
		bkp = bkp / 10;
	}
	sum = sum + ld;
	cout << sum << nl;
}

int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		solve();
	}
	return 0;
}
