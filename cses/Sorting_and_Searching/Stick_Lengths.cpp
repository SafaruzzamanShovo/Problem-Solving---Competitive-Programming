// cses task 1074 - Stick Lengths
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n; cin>>n;
    ll a[n],sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int mid = a[n/2];
    for(int i=0;i<n;i++){
        sum += abs(a[i]-mid);
    }
    cout<<sum ;
}