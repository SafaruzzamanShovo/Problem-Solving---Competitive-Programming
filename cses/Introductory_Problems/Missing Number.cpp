#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase int t; cin>>t; for(int tt=1;tt<=t;tt++)

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n; cin >> n;
    ll expect = ( n * (n+1) ) / 2, sum = 0;

    for (int i = 0; i < n-1; i++)
    {
        ll x; cin >> x;
        sum += x;
    }

    cout << expect - sum << endl;
    return 0;
}