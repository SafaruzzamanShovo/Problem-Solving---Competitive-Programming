#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase int t; cin>>t; for(int tt=1;tt<=t;tt++)

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        ll all = i * i; 
        ll combin = (all * (all -1 )) / 2;
        if(i > 1)
            combin -= 4 * (i-1) * (i-2);

        cout << combin << endl;
    }

    return 0;
}