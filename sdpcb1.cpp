#include<bits/stdc++.h>

using namespace std;

#define lli long long int
#define vi vector<int>
#define vlli vector<lli>
#define nl "\n"
#define pb push_back



void start()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);	
}

void solve()
{
	lli n, k;
	cin >> n >> k;
	vlli arr(n);
	while(n--)
	{
		lli i;
		cin >> i;
		arr.pb(i);
	}
	sort(arr.begin(), arr.end(), greater<lli>());
	lli ans = 0;
	for(lli& elem : arr)
	{
		if(elem >= arr[k - 1])
		{
			++ans;
		}
	}	
	cout << ans << nl;
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
