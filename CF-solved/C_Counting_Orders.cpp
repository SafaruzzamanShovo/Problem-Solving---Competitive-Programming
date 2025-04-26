/*
        Codeforces Round 873 (Div. 2)
        Codeforces 1828C
        C. Counting Orders
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase int t; cin>>t; for(int tt=1;tt<=t;tt++)
int MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    testcase{
        int n; cin >> n;
        vector< ll > a(n),b(n),pre(n,0);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        
        sort(a.begin(),a.end()); 
        sort(b.begin(),b.end()); 

        ll j = 0;
        for (int i = 0; i < n; i++)
        {
            while(a[i]>b[j] && j<n) j++;
            pre[i] = j - i;
        }
        ll ans = 1;
        for (int i = 0; i < n; i++)
        {
            ans *= pre[i];
            ans %= 1000000007;
        }
        
        cout << ans << endl;
    }
    return 0;
}