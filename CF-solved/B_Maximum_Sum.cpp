/*
        Educational Codeforces Round 148 (Rated for Div. 2)
        Codeforces 1832B
        Maximum Sum
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
        ll n, k, tot = 0; cin >> n >> k;
        vector<ll> v(n), left(k+1), right(k+1), preR(k+1,0), preL(k+1,0);

        for (int i = 0; i < n; i++){
            cin >> v[i];
            tot += v[i];
        }
        sort(v.begin(), v.end());

        for (int i = 0; i < k; i++) {
            left[i] = v[2*i] + v[2*i+1] ;
            right[i] = v[n-1-i];
        }

        for (int i = 1; i <= k; i++){
            preR[i] = preR[i-1] + right[i-1];
            preL[i] = preL[i-1] + left[i-1];
        }

        ll sum = 0, mn = INT_MAX;
        for (int i = 0; i <= k; i++)
        {
            sum = preL[i] + preR[k-i];
            mn = min( mn, sum);
        }
        
        cout << tot-mn << endl;
    }
    return 0;
}