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
	vll v1,v2;
	fi(n){
		llx;
		v1.pb(x);
		v2.pb(x);
	}
	srt(v2);
	ll l=0,r=0;
	for (int i = 0; i < n; ++i)
	{
		if(v1[i]!=v2[i]){
			l=i;
			break;
		}
	}
	for (int i = n-1; i >= 0; --i)
	{
		if(v1[i]!=v2[i]){
			r=i;
			break;
		}
	}
	reverse(v1.begin()+l, v1.begin()+r+1);

	bool temp= true;
	for (int i = l; i <= r; ++i)
	{
		if(v1[i]!=v2[i]){
			temp=false;
			break;
		}
	}
	if(temp) {
		yes;
		cout<<l+1 sp << r+1;
	}
	else no;
}