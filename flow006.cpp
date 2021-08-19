#include<bits/stdc++.h>

#define int long long int

using namespace std;

main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
    	int n;
    	int s = 0;
    	cin >> n;
    	while(n > 0) 
        {
            int x = n % 10;
    		s = s + (x);
    		n = n / 10;
    	}
    	cout << s << "\n";
    }
}
