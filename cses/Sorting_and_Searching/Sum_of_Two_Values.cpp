// cses task 1640 Sum of two vlues
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x; cin>>n>>x;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        v.push_back({x,i+1});
    }
    sort(v.begin(),v.end());
    int sum=0,i=0,j=n-1;
    while(i<j){
        sum=v[i].first+v[j].first;
        if(sum<x) i++;
        else if(sum>x) j--;
        else break;
    } 
    if(sum==x) cout<<v[i].second<<' '<<v[j].second;
    else cout<<"IMPOSSIBLE";
}