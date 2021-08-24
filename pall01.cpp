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
	cin >> n;
	lli b = n;
	lli r = 0;
	while(n != 0)
	{
		lli d = n % 10;
		r = r * 10 + d;
		n = n / 10;
	}	
	if(b == r)
		cout << "wins" << nl;
	else
		cout << "loses" << nl;
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
