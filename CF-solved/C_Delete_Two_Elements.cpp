//codeforces 1598C
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t; cin>>t;
    while(t--){
       ll n; cin>>n;
       map<ll,ll> mp;
       ll sum = 0;
       for(int i=0;i<n;i++){
           ll x; cin>>x;
           mp[x]++;
           sum += x;
       }
        double avg = (double)sum / n;
        avg *= 2;
        ll av= avg;
        ll cnt = 0;
        if(av==avg){
            for(auto i: mp){
                ll x = i.first;
                ll dif = av - x;
                if(x==dif) cnt += (mp[x]*(mp[x]-1))/2;
                else if(mp[dif]>0 ){
                    cnt+= mp[dif]*mp[x];
                    mp[dif]=0;
                    }
            }
        }
        cout<<cnt<<endl;
    }
}