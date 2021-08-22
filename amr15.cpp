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
	int n;
	cin >> n;
	int l = 0, u = 0;
	while(n--)
	{
		int k;
		cin >> k;
		if(k%2 == 0)
			++l;
		else
			++u;	
	}	
	if(l>u)
		cout << "READY FOR BATTLE" << nl;
	else
		cout << "NOT READY" << nl;
}

int main()
{
	start();
		solve();
	return 0;
}
