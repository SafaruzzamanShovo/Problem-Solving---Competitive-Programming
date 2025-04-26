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
    lln
    vll v(n),s(n);
    ll sum=0;
    fi(n){
        cin>>v[i];
        if(i==0) s[i] = v[i];
        else s[i]+= s[i-1]+v[i];
        sum += v[i];
    }
    if(sum%3!=0) cout<<0;
    else{
        ll x=sum/3;
        ll cnt=0,ans=0;
        
        if(x!=0){
            fi(n-1){
            if(s[i]==x) cnt++;
            else if(s[i]==x*2) ans+=cnt;
            }
        }
        else{
            fi(n-2){
                if(s[i]==0){
                    cnt++;
                    ans+=cnt;
                }
            }
        }
        //cout<< s[i] sps cnt sps ans nl;
        cout<<ans;
    }

}