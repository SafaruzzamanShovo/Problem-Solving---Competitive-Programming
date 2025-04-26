// https://codeforces.com/edu/course/2/lesson/4/1/practice/contest/273169/problem/C
// Codeforces : ITMO Academy: pilot course
// Number of Minimums on a Segment


#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define testcase ll t; cin>>t; while(t--)
#define endl "\n"

const int N = 1e5 + 9;
ll arr[N];
ll minNum[N*4];
ll minCount[N*4];
static const int inf = 1e9;

void build(ll node, ll b, ll e){
	if(b == e){
		minNum[node] = arr[b];
		minCount[node] = 1;
		return;
	} 

	ll mid = ( b + e ) / 2;
	ll l = node * 2;
	ll r = l + 1;

	build(l, b, mid);
	build(r, mid+1, e);

	minNum[node] = min(minNum[l], minNum[r]);
	if(minNum[l] == minNum[node]) minCount[node] += minCount[l];
	if(minNum[r] == minNum[node]) minCount[node] += minCount[r];
}

void upd( ll node, ll b, ll e, ll i, ll x){
	if( b > i or e < i) return;
	minCount[node] = 0;

	if( b == e and b == i){
		minNum[node] = x;
		minCount[node] = 1;
		return;
	}

	ll mid = ( b + e ) / 2;
	ll l = node * 2;
	ll r = l + 1;

	upd( l, b, mid, i, x);
	upd( r, mid+1, e, i, x);

	minNum[node] = min(minNum[l], minNum[r]);
	if(minNum[l] == minNum[node]) minCount[node] += minCount[l];
	if(minNum[r] == minNum[node]) minCount[node] += minCount[r];
}


pair<int, int>  query( ll node, ll b, ll e, ll i, ll j){
	if( b > j or e < i) return make_pair(inf, 0);
	if( b>=i and e <=j) return make_pair(minNum[node], minCount[node]);

	ll mid = ( b + e ) / 2;
	ll l = node * 2;
	ll r = l + 1;

	pair<int, int> lt = query(l, b, mid, i, j);
	pair<int, int> rt = query(r, mid+1, e, i, j);

	ll minN = min(lt.first, rt.first);
	ll minC = 0;
	if(lt.first == minN) minC += lt.second;
	if(rt.first == minN) minC += rt.second;

	return make_pair(minN, minC);        
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
			pair<int, int> ans = query(1, 1, n, x+1, y);
			cout << ans.first << ' ' << ans.second << endl;
		}
	}

	return 0;
}