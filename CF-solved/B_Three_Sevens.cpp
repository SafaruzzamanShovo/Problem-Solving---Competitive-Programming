// Codeforces Round 860 (Div. 2)
// Codeforces 1798B
// B. Three Sevens

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t; cin>>t;
    while(t--){
        int days; cin>>days;
        vector<vector<int>> v(days);
        for(int i=0;i<days;i++){
            int n; cin>>n;
            for(int j=0;j<n;j++){
                int x; cin>>x;
                v[i].push_back(x);
            }
        }

        map<int,int > mp;
        vector<int> ans;
        bool b = false;
        for(int i=days-1;i>=0;i--){
            b = false;
            for(auto j: v[i]){
                if(mp.count(j)==0 && b==false){
                    ans.push_back(j);
                    b = true;
                }
                mp[j]++;
            } 
        }


        if(ans.size()<days) cout<<-1<<endl;
        else{
            for(int i= ans.size()-1; i>=0;i--){
                cout<<ans[i]<<' ';
            }cout<<endl;
        }
    }}