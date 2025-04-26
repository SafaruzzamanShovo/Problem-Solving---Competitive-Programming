// Codeforces - Packing Rectangles
// ITMO Academy: pilot course » Binary Search » Step 2 » Practice » A
// https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/A


#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

bool isOk(ll w, ll h, ll n, ll x){
	ll wn = x/w;
	ll hn = x/h;
	
	if(wn * hn >= n) return true;

	return false;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll w, h, n; cin >> w >> h >> n;

	ll ans = 0, lo = 0, hi = 100000000;
	ll mid = ( lo + hi ) / 2;

	while(lo <= hi) {
		mid = ( lo + hi ) / 2;

		if(isOk(w, h, n, mid)) {
			ans = mid;
			hi = mid - 1;
		}
		else lo = mid + 1;
	}

	cout << mid << endl;

	return 0;
}