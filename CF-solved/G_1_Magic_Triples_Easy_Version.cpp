/*
        Codeforces Round 867 (Div. 3)
        Codeforces 1822G1
        Magic Triples (Easy Version)
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase int t; cin>>t; for(int tt=1;tt<=t;tt++)
const int N = 1e6+9;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    testcase{
        ll n, ans = 0; cin >> n;
        int cnt[N] = {0};
        vector< int > uni;
        for(int i = 0; i < n; i++){
            ll x ; cin >> x; 
            cnt[x]++;
            if(cnt[x]==1) uni.push_back(x);
        }
        for(auto x : uni){
            if(cnt[x]>2){
                ll n = cnt[x];
                ans += n * (n-1) * (n-2) ;
            }
            for(ll b = 2; x*b*b <= 1e6 ; b++){
                    ans += 1LL * cnt[x] * cnt[x*b] * cnt[x*b*b];
            }
        }
        cout << ans << endl;
        
    }
    return 0;
}