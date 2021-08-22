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


int main()
{
	start();
	int T;
	cin >> T;
	int d = -10000;
	while(T--)
	{
		int a, b;
		cin >> a >> b;
		d = (abs(a - b) > (d) ) ? abs(a - b) : d; 
	}
	if(d < 0)
		cout << 2 << " " << abs(d) << nl;
	else 
		cout << 1 << " " << abs(d) << nl;
	return 0;
}
