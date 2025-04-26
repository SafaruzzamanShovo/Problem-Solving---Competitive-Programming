/*
        Codeforces Round 868 (Div. 2)
        Codeforces 1823B
        Sort with Step
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
        int n, k; cin >> n >> k;
        int cnt = 0;
        vector <int> v(n) , e;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            if(abs(v[i]-i-1)%k!=0){
                cnt++;
                e.push_back(i+1);
                e.push_back(v[i]);
            }
        }
        if(cnt==0) cout << 0 << endl;
        else if(cnt>2) cout << -1 << endl; 
        else{
            int dif1 = abs( e[0] - e[3] );
            int dif2 = abs( e[2] - e[1] );
            if((dif1 % k == 0) and (dif2 % k == 0) )
                cout << 1 << endl;
            else 
                cout << -1 << endl;
        }
    }
    return 0;
}