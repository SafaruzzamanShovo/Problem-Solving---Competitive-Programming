/*
        Codeforces Round 867 (Div. 3)
        Codeforces 1822C
        C. Bun Lover
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase int t; cin>>t; for(int tt=1;tt<=t;tt++)

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    testcase{
        ll n; cin>> n;
        ll ans = n * n + (n - 4) * 2 + 10;
        cout<< ans << endl;
    }
    return 0;
}