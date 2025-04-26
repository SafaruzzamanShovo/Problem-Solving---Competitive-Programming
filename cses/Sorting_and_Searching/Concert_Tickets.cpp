// cses task 1091 - Concert Tickets
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n,m; cin>>n>>m;
    vector<ll> t(n);
    for(int i=0;i<n;i++){
        cin>>t[i];
    }
    sort(t.begin(),t.end());

    // for(auto i:t) cout<<i<<" ";
    vector<ll>::iterator idx;
    for(int i=0;i<m;i++){
        ll x; cin>>x;
        if(lower_bound(t.begin(),t.end(),x)==t.end()) cout<< -1 <<endl;
        else{
            cout<< *lower_bound(t.begin(),t.end(),x) << endl;
            t.erase(lower_bound(t.begin(),t.end(),x));
        }
    }
}
//unsolved