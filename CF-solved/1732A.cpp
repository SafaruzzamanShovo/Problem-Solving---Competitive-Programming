#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

#define fi(n) for(ll i=0; i<n; i++)
#define fj(n) for(ll j=0; j<n; j++)
#define rfi(n) for(ll i = n-1; i >=0; --i)
#define fa(n) for(auto i:n)
#define fa2(n) for(auto i:n) cout<<i<<' ';
#define llt ll t; cin>>t; while(t--)
#define lln ll n; cin>>n;
#define llnm ll n,m; cin>>n>>m;
#define llx ll x; cin>>x;
#define llxy ll x,y; cin>>x>>y;
#define llab ll a,b; cin>>a>>b;

#define vi vector<int>
#define vll vector<ll>
#define vs vector<string>
#define pb push_back
#define mp make_pair
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
// ll arr[100000000]={0};

using namespace std;
int main(){
	llt{
		lln;
		vll v(n),v2(n);
		ll ans;
		fi(n){
			cin>>v[i];
			v2[i] = gcd(i+1,v[i]);
			if(i==0) ans= v[i];
			if(i!=0) ans = gcd(ans,v[i]);
		}
		// fa2(v2);
		// cout<< ans sp;

		if(ans==1) cout<<0 nl;
		else if(gcd(ans,v2[n-1])==1) cout<<1 nl;
		else if(gcd(ans,v2[n-2])==1) cout<<2 nl;
		else cout<<3 nl;
	}
}


// 0
// 1
// 2
// 2
// 1
// 3
// 3
// 0
// 1


// llt{
//     	lln;
//     	ll ans =0;
//     	for (int i =1 ; i <= n; ++i)
//     	{
//     		ans += i* (i+i+1);
//     		ans %= 1e9+7;
//     	}
//     	cout<< (ans*2022)%1e9+7 nl;
//     }