/*
        Codeforces Round 865 (Div. 1)
        Codeforces 1815A
        Ian and Array Sorting
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
        int n; cin >> n;
        vector< ll > v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        for (int i = 1; i < n-1; i++)
        {
            if(v[i] < v[i-1]){
                ll dif = v[i-1] - v[i];
                v[i] += dif;
                v[i+1] += dif;
            }
        }

        if(v[n-1] > v[n-2]) cout << "YES" << endl;
        else{
            for (int i = n-2; i > 0; i--)
            {
                if(v[i] > v[i+1]){
                    ll dif = v[i] - v[i+1];
                    v[i] -= dif;
                    v[i-1] -= dif;
                }
            }
            if( v[0] <= v[1]) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}