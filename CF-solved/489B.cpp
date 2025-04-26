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
#define yes cout<<"yes"<<endl
#define no cout<<"no"<<endl
#define C(x) cout<< x <<endl;
#define F i.first
#define S i.second


using namespace std;
int main(){
    lln;
    veccin(n);
    ll m;cin>>m;
    vll v2(m);
    fi(m) cin>>v2[i];
    srt(v);
    srt(v2);
    ll cnt=0,x=0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = x; j < m; ++j)
        {
            if(abs(v[i]-v2[j])<2){
                x++;
                cnt++;
                break;
            }
            else if(v[i]<v2[j]) break;
            else if(v[i]>v2[j]) x++;
        }
    }
    cout<<cnt;
}
