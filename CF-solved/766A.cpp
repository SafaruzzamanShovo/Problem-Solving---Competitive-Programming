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
	map<ll, ll> m1,m2;
	string a,b; cin>>a>>b;
	// fi(a.size()){
	// 	m1[a[i]]++;
	// }
	// fi(b.size()){
	// 	m2[b[i]]++;
	// }
	// int aa=0,bb=0;
	// for(auto i:m1){
	// 	if(m2.find(F)==m2.end()) aa += S;
	// }
	// for(auto i:m2){
	// 	if(m1.find(F)==m1.end()) bb += S;
	// }
	// if(max(aa,bb)==0) cout<< -1;
	// else 
	// 	cout<<max(aa,bb);
	if(a==b) cout<<-1;
	else cout<<max(a.size(),b.size());
}