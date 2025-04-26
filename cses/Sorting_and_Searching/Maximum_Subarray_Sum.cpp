// cses task 1643 - Maximum Subarray Sum
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n; cin>>n;
    ll a[n],preSum[n],mx=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i==0) preSum[i]=a[i];
        else preSum[i]= max(a[i], a[i]+preSum[i-1]);
        
        mx = max(mx,preSum[i]);
    }
    cout<<mx<<endl;
}