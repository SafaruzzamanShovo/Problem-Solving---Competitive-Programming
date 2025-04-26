#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll MOD = 4294967296;

int main(){
	vector<ll> v(100000009);
	v[1] = 1;
	for (ll i = 2; i < 100000000; ++i)
	{
		ll temp = __gcd(v[i-1], i);
		v[i] = (v[i-1] * (i/temp));
		v[i] %= MOD;
	}

	int t; cin >> t;
	while(t--){
		int x; cin >> x
;		cout << v[x] << endl;	
	}
	
}