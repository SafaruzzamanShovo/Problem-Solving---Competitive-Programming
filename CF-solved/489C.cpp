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
#define veccin(n) vll v(n); fi(n) cin>>v[i];

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
    int len,sum; cin>>len>>sum;
    int sum2=sum;
    if(sum>len*9 || (sum==0 && len!=1)) cout<<"-1 -1" nl;
    else{
        string mx = "";
        fi(len){
            if(sum>=9){
                mx+= '9';
                sum -= 9;
            }else{
                 mx+='0'+sum;
                 sum=0;
            }
        }
        //cout<<mx[len-1] nl;
        bool temp=false;
        if(mx[len-1]=='0' && sum2>0){
            cout<<1;
            temp=true;
        }
        else cout<< mx[len-1] ;
        for (int i = len-2; i >= 0; --i)
        {
            if(mx[i]=='0') cout<<'0';
            else if(temp==true){
                cout<< (char)(mx[i]-1);
                temp=false;
            }
            else cout<<mx[i];
        }
        cout<<' ';
        fi(len) cout<<mx[i];
    }
}
