// https://codeforces.com/edu/course/2/lesson/4/3/practice/contest/274545/problem/A
// Codeforces : ITMO Academy: pilot course
// Inversions

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  o_set<int> se;
  
  int n; cin >> n;

  for(int i = 0; i < n; i++){
    int x; cin >> x;
    se.insert(x);
    
    int smaller = se.order_of_key(x);
    cout << i - smaller << ' ';
  }
  
  return 0;
}