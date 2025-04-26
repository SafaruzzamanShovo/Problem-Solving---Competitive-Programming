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
#define veccin(n) vll v(n); fi(n){ cin>>v[i];}

#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a)*((b)/__gcd(a,b)))

#define nl <<endl
#define sp <<' '
#define endl "\n"
#define yes cout<<"yes"<<endl
#define no cout<<"no"<<endl
#define C(x) cout<< x <<endl;
#define F i.first
#define S i.second


using namespace std;
int main(){
    lln;
    veccin(n);
    vll psum(n);
    map<ll, ll> m;
    psum[0]=v[0];
    m[0]++;
    m[v[0]]++;
    for (int i = 1; i < n; ++i)
    {
        psum[i] += psum[i-1]+v[i];
        m[psum[i]]++;
    }
    ll ans=0;
    fa(m) { cout<<F sp<< S nl;
        ans += (S*(S-1))/2;}
    cout<< ((n*(n+1))/2)-ans nl;
}
