// Codeforces Round 761 (Div. 2)
// codeforces 1617C

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        vector<ll> v;
        map<ll,ll> mp;
        for(ll i=1;i<=n;i++){
            ll x; cin>>x;
            mp[x]++;
        }
        for(ll i=1;i<=n;i++){ 
            if(mp.count(i)){
                mp[i]--;
            }
            else{
                v.push_back(i);
            }
        }
        bool b = true;
        int j=0,cnt=0;
        for(auto i: mp){
            while(i.second>0){
                if(i.first> v[j]*2) {j++; cnt++; i.second--;}
                else { b = false; break;}
            }
        }
        if(b) cout<< cnt<<endl;
        else cout<<-1<<endl;
    }
}