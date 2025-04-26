// codeforces 1607D
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t; cin>>t;
    while(t--){
       ll n; cin>>n;
       vector<ll> v(n);
       vector<pair<char,ll>> vect;
       for(ll i=0;i<n;i++) cin>>v[i];
       char c; 
       for(ll i=0;i<n;i++){
            cin>>c;
            vect.push_back(make_pair(c,v[i]));
       }
       bool b = true;
       sort(vect.begin(),vect.end());
       for(int i=0;i<n;i++){
            if(vect[i].second>=i+1 && vect[i].first=='B') continue;
            else if(vect[i].second<=i+1 && vect[i].first=='R') continue;
            else {b=false; break;}
       }
       if(b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}