#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase int t; cin>>t; for(int tt=1;tt<=t;tt++)

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, sum = 0, ans = INT_MAX; cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];   
        sum += v[i];
    }

    for (int i = 0; i < (1 << n); i++)
    {
        string comb =  bitset<21>(i).to_string().substr(21 - n ) ;
        ll temp = 0;
        for (int i = 0; i < n; i++)
        {
            temp += v[i] * (comb[i] - '0');
        }
        ll another = sum - temp;
        ll dif = abs(temp - another);
        ans = min(ans, dif);
    }

    cout << ans << endl;

    return 0;
}