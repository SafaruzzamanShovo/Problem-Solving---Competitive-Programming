#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int N = 2e5 + 9;
vector<int> g[N];
bool vis[N];

void dfs(ll x, ll par, vector<ll>& v){
	vis[x] = true;

	for (auto i : g[x])
	{
		if( !vis[i] ) dfs(i, x, v);
	}
	v[par] += v[x] + 1;
}


int main(){
	ll n; cin >> n;
	for (int i = 1; i < n; ++i)
	{
		ll x; cin >> x;
		g[x].push_back(i+1);
	}

	vector<ll> v(n+1,0);
	dfs(1, 0, v);

	for (int i = 1; i <= n; ++i)
	{
		cout << v[i] << ' ';
	}
}