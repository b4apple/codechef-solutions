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
	bool h = true, t = false;
	lli l;
	cin >> l;
	string s;
	cin >> s;
	int bal = 0;
	for(char& curr : s)
	{
	 	if(curr=='H' && h)
		{
			h = false;
			t = true;
			++bal;
		}
		else if(curr=='T' && t)
		{
			h = true;
			t = false;
			--bal;
		}
		else if((curr=='H' && !h) || (curr=='T' && !t))
		{
			cout << "Invalid" << nl;
			return;
		}
	}
	if(!bal)
		cout << "Valid" << nl;
	else
		cout << "Invalid" << nl;
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
