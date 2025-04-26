// https://codeforces.com/contest/61/problem/E
// Codeforces Beta Round 57 (Div. 2) - 61E
// Enemy is weak


#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ll long long

template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  ll n, ans = 0; cin >> n;

  o_set<pair<ll, ll >> st;
  map<ll, ll> mp;
  vector<int> v(n), l(n), r(n);

  for (int i = 0; i < n; ++i)
  {
    cin >> v[i];
    mp[v[i]]++;
    l[i] = mp[v[i]];
  }

  mp.clear();
  for (int i = n-1; i >= 0; --i)
  {
    mp[v[i]]++;
    r[i] = mp[v[i]];
    st.insert( {r[i], i} );
  }

  for (int i = 0; i < n; ++i)
  {
    st.erase( st.find(r[i], i));
    ans += st.order_of_key(l[i]);
  }

  cout << ans << endl;
  
  return 0;
}