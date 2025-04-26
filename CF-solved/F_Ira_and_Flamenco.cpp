/*
        Codeforces Round 874 (Div. 3)
        Codeforces 1833F
        Ira and Flamenco
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
const int MOD = 1e9+7;

int BigMod(long long p, long long q, const int mod)
{
   int ans = 1 % mod;
   p %= mod;
   if (p < 0)
      p += mod;
   while (q)
   {
      if (q & 1)
         ans = (long long) ans * p % mod;
      p = (long long) p * p % mod;
      q >>= 1;
   }
   return ans;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--){
        int n,m; cin >> n >> m;
        map< ll , ll > mp;
        vector< ll > v, stack;
        for (int i = 0; i < n; i++)
        {
            ll x; cin >> x;
            mp[x]++;
        }

        ll mul = 1, sum = 0, st = 0;

        for (auto i : mp)
        {
            stack.push_back(i.first);
            v.push_back(i.second);
            mul *= i.second;
            mul %= MOD;

            if(stack.size() >= m){
                if(stack[stack.size()-1] - stack[st] == m-1){
                    sum = ( sum + mul ) % MOD;
                }
                mul *= BigMod(v[st],MOD-2, MOD);
                mul %= MOD;
                st++;
            }
        }
        
        cout << sum << endl;

    }
    return 0;
}