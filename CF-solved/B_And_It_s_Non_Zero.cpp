#include <bits/stdc++.h>
using namespace std;
#define ll long long
int store[200002][20];
int main(){
    for(int i=1;i<=200000;i++){
        for(int j=0;j<=18;j++){
            store[i][j]=store[i-1][j];
            if((i&(1<<j))!=0) store[i][j]++;
        }
    }
    int t;
    cin>>t;
    while(t--){
        int a,b; cin>>a>>b;
        int mx=0;
        for(int i=0;i<18;i++){
            mx = max(mx,store[b][i]-store[a-1][i]);
        }
        cout<<b-a+1-mx<<endl;
    }
    return 0;
}