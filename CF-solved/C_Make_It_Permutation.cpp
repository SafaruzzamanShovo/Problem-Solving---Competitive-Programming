/*
        CodeTON Round 4 (Div. 1 + Div. 2, Rated, Prizes!)
        Codeforces 1810C
        C. Make It Permutation
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define testcase ll t; cin>>t; while(t--)
#define endl '\n'

int main(){
    testcase{
        ll n,c,d; cin>>n>>c>>d;
        map<ll,ll> m;
        vector<ll> v;
        ll sum=0,temp=0;

        for(ll i=0; i<n; i++) {         // input section
            ll x; cin>>x;
            if(m.count(x)) sum += c;    // delete operation on duplicate elements
            else{
                m[x]++;
                v.push_back(x);         // pushing unique value into vector v
            }
        }
        sort(v.begin(), v.end());
        ll last = v.size();


        if(v[0]!=1){        // if the array doesn't contain '1'
            sum += d;
            last++;
            v.insert(v.begin(),1);
        }
        for(ll i=v.size()-1; i>0; i--){
            if(v[i-1]<v[i]-1){
                if( (last-i)*c > (v[i]-v[i-1]-1)*d+temp ) {    // adding condition
                    temp += (v[i]-v[i-1]-1)*d; 
                }
                else {
                    temp=0;
                    sum += (last-i)*c;                // deleting condition
                    last = i;
                }
            }
        }
        cout<<sum+temp<<endl;
    }
}