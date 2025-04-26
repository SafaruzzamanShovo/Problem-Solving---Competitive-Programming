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

using namespace std;

int op(string s) {
  bool eq=true,de=true;
  for (int i = 0; i < s.size()-1; ++i)
  {
  	if(s[i]!=s[i+1] && s[i]!='-' && s[i+1]!='-') eq=false;
  	else if(s[i]!=s[i+2] && s[i]!='-' && s[i+2]!='-' && s[i+1]=='-') eq=false;
  	if(s[i]<=s[i+1] && s[i]!='-' && s[i+1]!='-') de=false;
  	else if(s[i]<=s[i+2] && s[i]!='-' && s[i+2]!='-' && s[i+1]=='-') de=false;

  	if(!eq && !de) break;
  }
  if(eq) return 1;
  else if(de) return 2;
  else return 3;
}


int main(){
    ll n; cin>>n;
    vll taxi(n,0),pizza(n,0),girl(n,0);
    ll mxp=0,mxt=0,mxg=0;
    string s[n];
    for (int i = 0; i < n; ++i)
    {
    	ll m; cin>>m;
    	cin>>s[i];
    	for (int j = 0; j < m; ++j)
    	{		
	    	string nums; cin>>nums;
	    	int o = op(nums);
	    	if(o==1) taxi[i]++;
	    	else if(o==2) pizza[i]++;
	    	else girl[i]++;
	    	mxp = max(mxp,pizza[i]);
	    	mxt = max(mxt,taxi[i]);
	    	mxg = max(mxg,girl[i]);
	    	
    	}
    // cout<< taxi[i] sps pizza[i] sps girl[i] nl;
    }
    cout<<"If you want to call a taxi, you should call: ";
    string ans="";
    for (int i = 0; i < n; ++i)
    {
    	if(taxi[i]==mxt && ans.size()==0) ans+=s[i];
    	else if(taxi[i]==mxt && ans.size()!=0) ans+=", "+s[i];
    }
    cout<<ans<<'.' nl;

    cout<<"If you want to order a pizza, you should call: ";
     ans="";
    for (int i = 0; i < n; ++i)
    {
    	if(pizza[i]==mxp && ans.size()==0) ans+=s[i];
    	else if(pizza[i]==mxp && ans.size()!=0) ans+=", "+s[i];
    }
    cout<<ans<<'.' nl;

    cout<<"If you want to go to a cafe with a wonderful girl, you should call: ";
     ans="";
    for (int i = 0; i < n; ++i)
    {
    	if(girl[i]==mxg && ans.size()==0) ans+=s[i];
    	else if(girl[i]==mxg && ans.size()!=0) ans+=", "+s[i];
    }
    cout<<ans<<'.' nl;

}

// If you want to call a taxi, you should call: Rogulenko.
// If you want to order a pizza, you should call: Fedorov, Rogulenko, Kaluzhin.
// If you want to go to a cafe with a wonderful girl, you should call: Melnikov.