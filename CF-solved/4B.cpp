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
#define vs vector<string>
#define pb push_back
#define pbx ll xx; cin>> xx; v.pb(xx);
#define pbs string xx; cin>> xx; v.pb(xx);
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define rsortall(x) sort(all(x),greater<ll>())

#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a)*((b)/__gcd(a,b)))

#define nl endl
#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define C(x) cout<< x <<endl;
#define F i.first
#define S i.second


using namespace std;
int main(){
	ll n,d,a=0,b=0; cin>>n>>d;
	vll mn(n),mx(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>mn[i]>>mx[i];
		a += mn[i];
		b += mx[i];
	}
	if(d<a || d>b) no;
	else{
		yes;
		ll ext = d - a;
		for (int i = 0; i < n; ++i)
		{
			cout<< mn[i] + min(ext,mx[i]-mn[i])<<' ';
			ext -= min(ext,mx[i]-mn[i]);

		}
	}
}