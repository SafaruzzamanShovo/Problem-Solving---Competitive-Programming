#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase int t; cin>>t; for(int tt=1;tt<=t;tt++)

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n; cin >> n;
    if(n <= 3 and n != 1) cout << "NO SOLUTION" << endl;
    else{
        for (int i = 2; i <= n; i += 2) cout << i << ' ';  
        for (int i = 1; i <= n; i += 2) cout << i << ' ';
    }     
    return 0;
}