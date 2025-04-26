// cses task 1619 Restaurant Customers
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int in[n], out[n];
    for(int i=0; i<n; i++){
        cin>>in[i]>>out[i];
    }
    sort(in, in+n);
    sort(out, out+n);
    int mx=0,cnt=0,j=0;
    for(int i=0; i<n; i++){
        if(in[i]<out[j]) cnt++;
        else{
            while(in[i]>out[j]) {
                cnt--;
                j++;
            }
        cnt++;
        }
        mx= max(mx,cnt);
    }
    cout<<mx<<endl;
    return 0;
}