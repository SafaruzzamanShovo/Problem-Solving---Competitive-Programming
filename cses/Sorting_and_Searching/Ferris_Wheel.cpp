// cses task 1090 Ferris Wheel
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,w; cin>>n>>w;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int temp=0,ans=0;
    for(int i=n-1;i>=temp;i--){
        if(a[i]+a[temp]<=w) {
            temp++;
            ans++;
        }
        else{
            ans++;
        }
    }
    cout<<ans<<"\n";
    return 0;
}