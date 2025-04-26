
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase int t; cin>>t; for(int tt=1;tt<=t;tt++)

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    testcase{
        int n; cin >> n;
        vector< int > v(n);
        map < int , int > mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
         
        int liar = 0;
        vector < int > temp;
        for(auto i : mp){
            if( n - i.first < i.second ) liar += i.second;
            else temp.push_back( i.first );
        }

        bool shotti = true;
        for( auto i : temp){
            if( i > liar ){
                shotti = false;
                break;
            }
        }
    
        if(liar == n || !shotti) cout << -1 << endl;
        else cout << liar << endl;
    }
    return 0;
}