#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase int t; cin>>t; for(int tt=1;tt<=t;tt++)

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    testcase{
        ll a, b; cin >> a >> b;
        ll sum = a + b;
        if( sum % 3 != 0) cout << "NO" << endl;
        else if( max(a,b) > 2 * min(a,b)) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}