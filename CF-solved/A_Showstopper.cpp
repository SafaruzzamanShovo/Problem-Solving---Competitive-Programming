// Codeforces Round 860 (Div. 2)
// Codeforces 1798A
// A. Showstopper

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t; cin>>t;
    while(t--){
        int n,a=INT_MIN,b=INT_MIN; cin>>n;
        vector<int> v1(n),v2(n),mx(n),mn(n);
        for (int i = 0; i < n; i++)
            {cin>>v1[i]; }
        for (int i = 0; i < n; i++)
            {cin>>v2[i];}
        

        for (int i = 0; i < n; i++)
        {
            mx[i] = max(v1[i],v2[i]);
            mn[i] = min(v1[i],v2[i]);
            a = max(a,mx[i]);
            b = max(b,mn[i]);
        }

        if(mx[n-1]>=a && mn[n-1]>=b) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        
    }}