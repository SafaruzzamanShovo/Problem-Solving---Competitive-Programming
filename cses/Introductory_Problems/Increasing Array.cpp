#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase int t; cin>>t; for(int tt=1;tt<=t;tt++)

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, ans = 0; cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        if(i > 0 and v[i] < v[i-1]){
            ans += v[i-1] - v[i];
            v[i] = v[i-1];
        }
    }
    cout << ans << endl;

    return 0;
}