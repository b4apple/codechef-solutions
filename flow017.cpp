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
	int a, b, c;
	cin >> a >> b >> c;
	vi d;
	d.pb(a);
	d.pb(b);
	d.pb(c);
	sort(d.begin(), d.end());
	cout << d[1] << nl;	
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
