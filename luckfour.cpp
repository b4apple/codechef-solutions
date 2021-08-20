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
	lli c = 0;
	for(int i = 0; i < s.length(); i++)
	{
		if(s[i] == '4')
		{
			c = c + 1;
		}
	}
	cout << c << nl;
}

int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		solve();
	}
	return 0;
}
