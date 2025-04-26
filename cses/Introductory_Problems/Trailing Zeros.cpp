#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase int t; cin>>t; for(int tt=1;tt<=t;tt++)

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, cnt = 0; cin >> n;
    for(ll i = 5; i <= n; i*=5){
        cnt += n/i;
    }
    cout << cnt << endl;
    return 0;
}


/*
for (int i = 5; i <= n; i+=5)
    {
        int temp = i;
        while (temp%5 == 0){
            temp /= 5;
            cnt ++;
        }
    }
*/