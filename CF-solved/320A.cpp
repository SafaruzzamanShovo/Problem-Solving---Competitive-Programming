#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

#define fi(n) for(ll i=0; i<n; i++)
#define rfi(n) for(ll i=n-1; i>=0; i--)
#define fj(n) for(ll j=0; j<n; j++)
#define fa(n) for(auto i:n)
#define fa2(n) for(auto i:n) cout<<i<<' ';
#define llt ll t; cin>>t; while(t--)
#define lln ll n; cin>>n;
#define llx ll x; cin>>x;
#define llc ll cnt=0;
#define llmx ll mx=0;
#define llmn ll mn=INT_MAX;
#define vi v[i]

#define vii vector<int>
#define vll vector<ll>
#define mll map<ll,ll>
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
	string s; cin>>s;
	ll f=1;
	fi(s.size()){
		if(s[i]=='1' && s[i+1]=='4' && s[i+2]=='4') i+=2;
		else if(s[i]=='1' && s[i+1]=='4') i++;
		else if(s[i]=='1') continue;
		else {
			f=0;
			break;
		}
	}
	if(f==1) yes;
	else no;
}