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
	lli r;
	cin >> r;
	if(r < 1600)
		cout << 1 << nl;
	else if(r >= 1600 && r < 2000)
		cout << 2 << nl;
	else if(r >= 2000)
		cout << 3 << nl;	
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
