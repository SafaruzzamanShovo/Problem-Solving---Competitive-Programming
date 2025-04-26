/*
        Codeforces Round 868 (Div. 2)
        Codeforces 1823A
        A-characteristic
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
        int n , k ; cin>> n >> k;
        int b = -1;
        for(int i = 0; i <= n/2; i++){
            int plus = n-i, minus = i, sum = 0;
            sum += ((plus - 1) * plus) / 2 ;
            if(minus > 1)
                sum += ((minus - 1) * minus) / 2 ;
            if(sum == k){
                b = i;
                break;
            }
        }
        if(b != -1){
            cout << "YES" << endl;
            for(int i =0; i < n-b; i++) cout << "1 ";
            for(int i =0; i < b; i++) cout << "-1 ";    cout << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}