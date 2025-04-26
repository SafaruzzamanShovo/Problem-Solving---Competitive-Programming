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

#define nl endl;
#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define C(x) cout<< x <<endl;
#define F i.first
#define S i.second


using namespace std;
int main(){
	ll n,m,cnt=0; cin>>n>>m;
	while(n>2 || m>2){
		ll tmp1=n,tmp2=m,m2=0; // 3 5
		if(tmp1%2==1){
			cnt+= tmp1/2;
			n = 1; 
			m2 += tmp1/2;
		}
		else if(tmp1!=0 && tmp1%2==0){ 
			cnt += tmp1/2-1;
			n = 2; 
			m2 += tmp1/2-1;
		}
		if(tmp2%2==1){
			cnt += tmp2/2;
			m=1;
			n += tmp2/2;
			//m = 1 + tmp1/2;
		}
		else if(tmp2%2==0 && tmp2!=0){
			cnt += tmp2/2-1;
			m=2;
			n += tmp2/2 -1;
			//m = 2 + tmp1/2;
		}
		m+=m2;
		//cnt += n/2 + m/2; // 1 2
		// n = (tmp1%2) + tmp2/2; // 1+2 1+1
		// m = (tmp2%2) + tmp1/2;
		


	}
	if(n==2 || m==2) cout<<++cnt;
	else cout<<cnt;
}