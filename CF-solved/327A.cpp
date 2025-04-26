#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

#define fi(n) for(ll i=0; i<n; i++)
#define fj(n) for(ll j=0; j<n; j++)
#define fa(n) for(auto i:n)
#define fa2(n) for(auto i:n) cout<<i<<' ';
#define llt ll t; cin>>t; while(t--)
#define lln ll n; cin>>n;
#define llx ll x; cin>>x;

#define vi vector<int>
#define vll vector<ll>
#define vs vector<string>
#define pb push_back
#define pbx ll xx; cin>> xx; v.pb(xx);
#define pbs string xx; cin>> xx; v.pb(xx);
#define all(x) x.begin(), x.end()
#define srt(x) sort(all(x))
#define rsrt(x) sort(all(x),greater<ll>())
#define veccin(n) vll v(n); fi(n) cin>>v[i];

#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a)*((b)/__gcd(a,b)))

#define endl "\n"
#define nl <<endl
#define sp <<' '
#define sps <<' '<<
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define C(x) cout<< x <<endl;
#define F i.first
#define S i.second

using namespace std;
int main(){
    lln;
    vll v(n),v0(n,0),v1(n,0);
    fi(n){
        cin>>v[i];
        if(i==0){
            if(v[i]==1) v1[0]=1;
            else v0[0]=1;
        }
        else{
            if(v[i]==1) v1[i]++;
            else v0[i]++;

            v1[i]+=v1[i-1];
            v0[i]+=v0[i-1];
        }
    }
    //fa2(v1);
    ll mx=0,ix=0,jx=0;
    // if(n==1){
    //     if(v[0]==1) cout<<0;
    //     else cout<<1;

    //     return 0;
    // }
    fi(n){
        for (int j = i; j < n; ++j)
        {
            ll temp0,temp1;
            if(i==0){
                temp0 = v0[j] ;
                temp1 = v1[j] ;
            }else{
                temp0 = v0[j] - v0[i-1];
                temp1 = v1[j] - v1[i-1];
            }

            // cout<<i sps j sps temp0 sps temp1 nl;
            if(temp0>temp1){
                ll dif=temp0-temp1;
                //cout<<i sps j sps dif nl;
                if(dif>mx) {
                    mx=dif;
                    ix=temp0;
                    jx=temp1;
                    // cout<<i sps j sps dif nl;
                }
            }
        }
    }
    if(v1[n-1]==n) cout<<n-1;
    else
    cout<< v1[n-1]-jx+ix nl;
}
