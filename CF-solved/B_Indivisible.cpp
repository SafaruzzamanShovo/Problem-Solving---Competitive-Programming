/*
    Codeforces Round 869 (Div. 2)
    Codeforces 1818C
    Almost Increasing Subsequence
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
        int n; cin>> n;
        if(n == 1) cout << 1 <<endl;
        else if( (n * (n + 1)) / 2 % n == 0) cout << -1 << endl;
        else{
            for (int i = 2; i <= n; i+= 2)
            {
                cout << i << ' ' << i-1 << ' ' ; 
            }
            cout << endl;
        }
    }
    return 0;
}