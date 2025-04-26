#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t; cin>>t;
    while(t--){
       ll n,k; cin>>n>>k;
       ll a[n];
       for(ll i=0;i<n;i++) cin>>a[i];
       sort(a,a+n);
       ll ans=0;
       int j=n-k;
    //    for(auto i:a) cout<<i<<" ";
    //    cout<<j<<endl;
    //    for(ll i=0;i<k;i++){
    //         ans += a[i]/a[j];
    //         j++;
    //    }
    //    for (int i = k; i < n-k; i++)
    //    {
    //         ans += a[i];
    //    }
       
       vector<int> temp;
       for (int i = n-1; i >= n-k; i--)
       {
         ans+= a[i-k]/a[i];
         a[i-k] = a[i] = 0;
       }
       for(auto i:a) ans += i;
       cout<<ans<<endl;
    }
}