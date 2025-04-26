/*
        Codeforces Round 874 (Div. 3)
        Codeforces 1833B
        Restore the Weather
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
        ll n, k;
        cin >> n >> k;

        vector<ll> va(n);
        vector<pair<ll, ll>> vp;
        for (long long i = 0; i < n; i++)
        {
            cin >> va[i];
            vp.push_back({va[i], i});
        }
        sort(vp.begin(), vp.end());
        vector<long long> vb(n);
        for (int i = 0; i < n; i++) cin >> vb[i];
        sort(vb.begin(), vb.end());

        vector<ll> vc(n);
        for (long long i = 0; i < n; i++) vc[vp[i].second] = vb[i];

        for(auto i:vp) cout<< i.first<<' '; cout<<endl;
        for(auto i:vb) cout<< i <<' '; cout<<endl;
        for (long long i = 0; i < n; i++) cout << vc[i] << " ";
        cout << endl;
    }
    return 0;
}