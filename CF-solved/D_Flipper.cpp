/*
        Codeforces Round 874 (Div. 3)
        Codeforces 1833D
        Flipper
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t; 
    for(int test=1;test<=t;test++){
        int n,indx = -1,indx2=-1; 
        cin >> n;
        vector<int> v(n),mxv(n,0);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if(v[i]==n) indx = i;
            if(v[i]==n-1) indx2 = i;
        }
    if(n==1){
        cout<<1<<endl;
        continue;
    }

    if(indx == 0){
        indx = indx2;
    }
    if(indx == n-1){
        mxv[0] = v[indx];
        for (int i = 0; i < n-1; i++)
            mxv[i+1] = v[i];
    }

    int j = indx - 1;
    for (int i = 0; i <= j; i++)
    {
        vector<int> temp;
        for (int k = j+1; k < n; k++)
            temp.push_back(v[k]);

        for (int k = j; k >= i; k--)
            temp.push_back(v[k]);
        
        for (int k = 0; k < i; k++)
            temp.push_back(v[k]);
            
        mxv = max(temp, mxv);
    }


       
        for(auto i:mxv) cout<<i<<' ';cout<<endl;
    }

    return 0;
}