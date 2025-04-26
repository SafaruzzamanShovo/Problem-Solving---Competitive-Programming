#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase int t; cin>>t; for(int tt=1;tt<=t;tt++)

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    testcase{
        ll x , y; cin >> y >> x;
        if(y > x){ // 4 2
            if(y % 2 == 0) cout << (y * y) - (x-1) << endl;
            else cout << ((y-1) * (y-1)) + x << endl;
        } 
        else{
            if(x % 2 != 0) cout << (x*x) - (y-1) << endl;
            else cout << ((x-1) * (x-1)) + y << endl;
        }
    }
    return 0;
}