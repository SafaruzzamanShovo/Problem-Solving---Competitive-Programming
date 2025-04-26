#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase int t; cin>>t; for(int tt=1;tt<=t;tt++)
const int MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;  cin >> n;
    ll sum = 1;
    while(n--) {
        sum <<= 1;
        sum %= MOD;
    }
    cout << sum << endl;
    return 0;
}