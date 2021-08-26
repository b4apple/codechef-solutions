#include<bits/stdc++.h>
#include<numeric>
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



lli gcd(lli x, lli y)
{
	if(x == 0)
		return y;
	if(y == 0)
		return x;
	if(x == y)
		return x;
	if(x > y)
		return gcd(x - y, y);
	return gcd(x, y - x);
}




lli lcm(lli x, lli y)
{
	return (x / gcd(x, y)) * y;
}



void solve()
{
	lli a, b;
	cin >> a >> b;
	cout << gcd(a, b) << " " << lcm(a, b) << nl;	
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
