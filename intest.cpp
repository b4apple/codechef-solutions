#include<bits/stdc++.h>

#define int long long int

using namespace std;

main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    int c = 0;
    while(n--)
    {
    	int t;
    	cin >> t;
    	if(t % k == 0)
    		++c;
    }
    cout << c;
}