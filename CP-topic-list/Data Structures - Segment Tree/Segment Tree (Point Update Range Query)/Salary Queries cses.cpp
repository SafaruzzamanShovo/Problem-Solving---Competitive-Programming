// https://codeforces.com/contest/61/problem/E
// Codeforces Beta Round 57 (Div. 2) - 61E
// Enemy is weak


#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ll long long
#define inf 1e9

template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  ll n, m; cin >> n >> m;

  o_set< pair<int,int> > os;
  vector<ll> v(n);
  
  for(int i = 0; i < n; i++){
    cin >> v[i];
    os.insert( make_pair( v[i], i+1 ) );
  }
  

  for(int i = 0; i < m; i++){
    char q; cin >> q;

    if( q == '?'){ // query
      ll a, b; cin >> a >> b;

      cout << os.order_of_key({b, inf}) - os.order_of_key({a-1, inf}) << endl;
    }
    else{ // update
      ll k, x; cin >> k >> x;

      os.erase( os.find({v[k-1] , k}) );
      os.insert({ x, k});
      
      v[k-1] = x;
    }
  }

  return 0;
}