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
	
}

int main()
{
	int T;
	cin >> T;
	int L = T;
	vi arr;
	while(L--)
	{
		int k;
		cin >> k;
		arr.push_back(k);
	}
	sort(arr.begin(), arr.end());
	for(int i = 0; i < T; i++)
	{
		cout << arr[i] << nl;
	}
	return 0;
}
