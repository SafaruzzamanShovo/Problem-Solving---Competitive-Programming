#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll quad(ll x){
    return ((sqrt(1LL+4LL*x)-1LL)/2LL);
}

int main(){
    ll t; cin>>t;
    while(t--){
        ll k,x; cin>>k>>x;
        ll mid = (k * (k + 1))/2;
        if(x<=mid) {
            ll ans =(quad(2LL*x));
            if((ans*(ans +1))/2LL <x) cout<< ans+1<<endl;
            else cout<<ans<<endl;
            continue;
            }
        else if(x>=(mid+mid-k)) {cout<<k+k-1<<endl; continue;}

        
        ll ans = 2* k -1;
        x -= mid;
        mid -= k;
        ll temp = (mid-x)*2;
        cout<<ans-(quad(temp))<<endl; ;
    }
}