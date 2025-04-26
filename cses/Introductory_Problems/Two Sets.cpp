#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase int t; cin>>t; for(int tt=1;tt<=t;tt++)

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n; cin >> n;
    ll temp =( n* (n+1) ) / 2;
    if(temp % 2 ) cout << "NO" << endl;
    else{
        vector<ll> a,b;
        ll sum = 0;
        for (int i = n; i >= 1; i--)
        {
            if( i + sum <= (temp / 2)){
                sum += i;
                a.push_back(i);
            }
            else b.push_back(i);
        }
        cout << "YES" << endl;
        cout << a.size() << endl;
        for(auto i : a) cout << i << ' '; cout << endl;
        cout << b.size() << endl;
        for(auto i : b) cout << i << ' '; cout << endl;
    }
    return 0;
}