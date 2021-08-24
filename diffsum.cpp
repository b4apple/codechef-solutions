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
	lli a, b;
	cin >> a >> b;
	if(a > b)
		cout << (a - b) << nl;
	else
		cout << (a + b) << nl;	
}

int main()
{
	start();
	solve();
	return 0;
}
