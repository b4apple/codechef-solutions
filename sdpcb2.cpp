#include<bits/stdc++.h>

using namespace std;

#define lli long long int
#define vi vector<int>
#define nl "\n"
#define pb push_back
#define vlli vector<lli>

inline lli gauss(lli n)
{
	lli s = n;
	s = s * (n + 1);
	s = s / 2;
	return s;
}
inline lli vec_sum(vlli& vec)
{
	lli s = 0;
	for(lli elem : vec)
	{
		s = s + elem;
	}
	return s;
}
bool is_valid(vlli& vec)
{
	lli len = vec.size();
	return ((len % 2 != 0) && (vec[0] == 1 && vec[len - 1] == 1) && (vec_sum(vec) == gauss((len / 2) + 1) + gauss(len / 2)) ); 
}

void start()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);	
}

void solve()
{
	lli s;
	cin >> s;
	vector<vlli> d(s);
	for(int i = 0; i < s; i++)
	{
		vlli c;
		lli n;
		cin >> n;
		for(int j = 0; j < n; j++)
		{
			lli i;
			cin >> i;
			c.pb(i);
		}
		d[i] = c;
	}	
	for(vlli& curr : d)
	{
		if(is_valid(curr))
			cout << "yes" << nl;
		else
			cout << "no" << nl;
	}
}

int main()
{
	start();
	solve();
	return 0;
}
