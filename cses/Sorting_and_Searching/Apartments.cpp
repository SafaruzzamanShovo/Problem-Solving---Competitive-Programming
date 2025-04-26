// cses Apartments task-1084
#include <bits/stdc++.h>

using namespace std;
#define ll long long
 int main(){
    int n,m,k; cin>>n>>m>>k;
    priority_queue<int> desire,apartment;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        desire.push(x);
    }
    for(int i=0;i<m;i++){
        int x; cin>>x;
        apartment.push(x);
    }
    int ans=0;
    while(!desire.empty() && !apartment.empty()){
        if(abs(desire.top()-apartment.top()) <= k){
            ans++;
            desire.pop();
            apartment.pop();
        }
        else if(desire.top()>apartment.top()) desire.pop();
        else apartment.pop();
    }
    cout<<ans<<"\n";
    return 0;
 }