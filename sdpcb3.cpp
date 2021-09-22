#include<bits/stdc++.h>

using namespace std;

#define lli long long int
#define vi vector<int>
#define nl "\n"
#define pb push_back
#define vlli vector<lli>


void start()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);	
}

void solve()
{
	lli n;
	cin >> n;
	lli a[n];
	for (int i = 0; i < n; ++i)
	{
		lli inp;
		cin >> inp;
		a[i] = inp;
	}
	lli in;
	cin >> in;
	lli ans = (in > a[0]) ? 0 : 1;
	for (int i = 1; i < n; ++i)
	{
		lli inp;
		cin >> inp;
		ans += (inp > (a[i] - a[i - 1])) ? 0 : 1;
	}
	cout << ans << nl;
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
