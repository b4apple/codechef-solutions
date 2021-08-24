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
	lli k;
	cin >> k;
	lli c = 0;
	for(lli i = 1; i <= k; i++)	
	{
		if(k % i == 0)
			++c;
	}
	if(c == 2)
		cout << "yes" << nl;
	else
		cout << "no" << nl;
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
