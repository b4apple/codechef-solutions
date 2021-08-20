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
	cin >> k;
	string s = to_string(k);
	reverse(s.begin(), s.end());
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
