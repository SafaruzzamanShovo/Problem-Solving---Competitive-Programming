/*
        Codeforces Round 867 (Div. 3)
        Codeforces 1822D
        D. Super-Permutation
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
        if(n == 1) cout<< 1 <<endl;
        else if(n % 2 )
            cout<< -1 <<endl;
        else{
            for(int i = 0; i < n/2; i++){
                cout<< n - i * 2 <<' '<< i * 2 + 1 <<' ';
            } cout << endl;
        }
    }
    return 0;
}