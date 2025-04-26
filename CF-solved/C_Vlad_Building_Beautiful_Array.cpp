/*
        Codeforces Round 874 (Div. 3)
        Codeforces 1833C
        Vlad Building Beautiful Array
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t; cin>>t; 
    for(int test=1;test<=t;test++){
        ll n ; cin >> n; 
        vector < ll > even, odd;
        for (int i = 0; i < n; i++)
        {
            ll x; cin >> x;
            if( x % 2) odd.push_back(x);
            else even.push_back(x);
        }
        if(odd.size()==0 || even.size()==0) cout << "YES"<<endl;
        else{
            sort(even.begin(), even.end());
            sort(odd.begin(), odd.end());

            if(odd[0] < even[0]) cout << "YES"<<endl;
            else cout << "NO" << endl;
        }
    }
}