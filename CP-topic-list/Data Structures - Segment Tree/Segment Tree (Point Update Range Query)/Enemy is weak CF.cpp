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
  
  ll n; cin >> n;

  o_set<ll> left, right;
  vector<ll> v(n);
  
  for(int i = 0; i < n; i++){
    cin >> v[i];
    right.insert(v[i]);
  }
  
  ll ans = 0;
  
  for(int i = 0; i < n; i++){
    right.erase( right.find(v[i]));
    
    // find greater value on left
    ll leftTotal = i;
    ll leftSmaller = left.order_of_key( v[i] );
    ll leftGreater = leftTotal - leftSmaller;
    
    // find smaller value on right
    ll rightTotal = n - i - 1;
    ll rightSmaller = right.order_of_key( v[i] );
    
    // ai > aj > ak
    // here (leftGreater * rightSmaller) would be the combination for each j
    ans += leftGreater * rightSmaller;
    
    left.insert(v[i]);
  }

  cout << ans << endl;
  
  return 0;
}