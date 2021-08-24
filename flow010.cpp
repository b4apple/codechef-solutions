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
	char k;
	cin >> k;
	switch(k)
	{
		case 'B':
		case 'b':
			cout << "BattleShip" << nl;
			break;
		case 'C':
		case 'c':
			cout << "Cruiser" << nl;
			break;
		case 'D':
		case 'd':
			cout << "Destroyer" << nl;
			break;
		case 'F':
		case 'f':
			cout << "Frigate" << nl;
			break;	
	}
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
