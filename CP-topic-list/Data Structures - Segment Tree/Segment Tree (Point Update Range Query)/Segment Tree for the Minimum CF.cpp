// https://codeforces.com/edu/course/2/lesson/4/1/practice/contest/273169/problem/B
// Codeforces : ITMO Academy: pilot course
// Segment Tree for the Minimum


#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define testcase ll t; cin>>t; while(t--)
#define endl "\n"

const int N = 1e5 + 9;
ll arr[N];
ll t[N*4];
static const int inf = 1e9;

void build(ll node, ll b, ll e){
	if(b == e){
		t[node] = arr[b];
		return;
	} 

	ll mid = ( b + e ) / 2;
	ll l = node * 2;
	ll r = l + 1;

	build(l, b, mid);
	build(r, mid+1, e);

	t[node] = min(t[l], t[r]);
}

void upd( ll node, ll b, ll e, ll i, ll x){
	if( b > i or e < i) return;

	if( b == e and b == i){
		t[node] = x;	
		return;
	}

	ll mid = ( b + e ) / 2;
	ll l = node * 2;
	ll r = l + 1;

	upd( l, b, mid, i, x);
	upd( r, mid+1, e, i, x);

	t[node] = min(t[l], t[r]);
}

ll query( ll node, ll b, ll e, ll i, ll j){
	if( b > j or e < i) return inf;
	if( b>=i and e <=j) return t[node];

	ll mid = ( b + e ) / 2;
	ll l = node * 2;
	ll r = l + 1;

	return min(query(l, b, mid, i, j), query(r, mid+1, e, i, j));
}

int main(){
	fast

	ll n, m; cin >> n >> m;
	for (ll i = 1; i <= n; ++i)
		cin >> arr[i];

	build(1, 1, n);

	for (ll i = 0; i < m; ++i)
	{
		ll op, x, y; cin >> op >> x >> y;

		if( op == 1){
			ll i = x, v = y;
			upd(1, 1, n, i+1, v);
		}
		else{
			ll l = x, r = y;
			cout << query(1, 1, n, x+1, y) << endl;
		}
	}

	return 0;
}