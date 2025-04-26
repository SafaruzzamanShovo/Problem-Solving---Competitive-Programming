#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase int t; cin>>t; for(int tt=1;tt<=t;tt++)

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    testcase{
        ll n; cin >> n;
        if(n < 10 ){
            cout << n << endl;
            continue;
        }
        ll range = 9, level = 1, temp = n, ten = 1;
        while(temp > range){
            temp -= range;
            level++;
            ten *= 10;
            range = 9* ten * level;
        }

        if(temp % level == 0) cout << (temp / level - 1) % 10 << endl;
        else {
            ll x = ten -1 + (temp / level);
            string s = to_string(ten);
            cout << s[(temp % level) -1]<< endl;

        }

    }
    return 0;
}