#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

#define fi(n) for(ll i=0; i<n; i++)
#define fj(n) for(ll j=0; j<n; j++)
#define fa(n) for(auto i:n)
#define fa2(n) for(auto i:n) cout<<i<<' ';
#define llt ll t; cin>>t; while(t--)

#define vi vector<int>
#define vll vector<ll>
#define vlp vector<pair<ll,ll>>
#define vs vector<string>
#define pb push_back
#define mp make_pair
#define pbx ll xx; cin>> xx; v.pb(xx);
#define pbs string xx; cin>> xx; v.pb(xx);
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define rsortall(x) sort(all(x),greater<ll>())

#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a)*((b)/__gcd(a,b)))

#define lln ll n;cin>>n;
#define llx ll x;cin>>x;
#define nl "\n"
#define yes cout<<"YES"<<nl;
#define no cout<<"NO"<<nl;
#define C(x) cout<< x <<nl;
#define F i.first
#define S i.second
const int N = 1e7;
using namespace std;

int main(){
	ll n,k,cnt=0; cin>>n>>k;
	vll v(n);
	fi(n) cin>>v[i];
	fi(n-1){
		if(v[i]+v[i+1]<k){
			cnt += k - v[i] - v[i+1];
			v[i+1] += k - v[i] - v[i+1];
		}
	}
	cout<<cnt<<nl;
	fi(n) cout<<v[i]<<' ';
}