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
	lli d, n;
	cin >> d >> n;
	n = n * (n + 1);
	n = n / 2;
	lli s = 0;
	d--;
	if(d == 0)
		s = n;
	while(d--)
	{
		s = n * (n + 1);
		s = s / 2;
		n = s;
	}	
	cout << s << nl;
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
