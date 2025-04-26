#include<bits/stdc++.h> 
using namespace std;

#define ll long long
#define endl '\n'
#define testcase ll t; cin >> t; while(t--)

int main(){
    testcase{
        int n, k; cin >> n>> k;
        string s; cin>> s;
        map< char, int > mp;

        for (int i = 0; i < n; ++i)
        {
            mp[s[i]]++;
        }

        int cnt = 0;
        for(auto i : mp){
            if( i.second % 2 ) cnt++; 
        }

        if(cnt > k+1) cout << "NO" << endl;
        else cout << "YES" << endl;

    }
}
