// Codeforces - 2039 C1. Shohag Loves XOR (Easy Version)
// CodeTON Round 9 (Div. 1 + Div. 2, Rated, Prizes!)
// https://codeforces.com/problemset/problem/2039/C1


#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while(t--){
		ll x, m; cin >> x >> m;

		ll mn = min(2LL*x, m), cnt = 0;

		for (int i = 1; i <= mn; ++i)
		{
			if(x != i and (!(x % (x ^ i)) or !(i % (x ^ i))))
				cnt++;
		}

		cout << cnt << endl;
	}

	return 0;
}