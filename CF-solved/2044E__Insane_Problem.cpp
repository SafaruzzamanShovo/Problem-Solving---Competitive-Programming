// Codeforces 2044 E - Insane Problem
// Codeforces Round 993 (Div. 4)



#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin>> t;
	while(t--){
		ll n, l1, r1, l2, r2, ans = 0; cin >> n >> l1 >> r1 >> l2 >> r2;
		vector<ll> pws;
		for (ll i = 1; i <= r2; i *= n)
		{
			pws.push_back(i);
			if(i >  r2/n ) break;

		}

		for(ll p : pws){
			ll xL = max( l1, (l2 + p-1) / p);
			ll xR = min( r1, r2/p);

			if(xR-xL >= 0) ans += xR-xL + 1;

			if(p >  r2/n ) break;

		}

		cout << ans << endl;
	}

	return 0;
}