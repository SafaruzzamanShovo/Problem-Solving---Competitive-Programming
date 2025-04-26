/*
        Educational Codeforces Round 147 (Rated for Div. 2)
        Codeforces 1821C
        Tear It Apart
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase int t; cin>>t; for(int tt=1;tt<=t;tt++)

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    testcase{
        string s; cin >> s; 
        int n = s.size(), mx = INT_MIN;
        vector<char> mxC;
        map< char, int > mp;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
            mx = max( mx, mp[s[i]] );
        }

        if(mx == n){
            cout << 0 << endl;
            continue;
        }

        int conse = 0, mxConse = 0, temp = INT_MAX;     
        for (auto k : mp)
        {
            mxConse = 0; conse = 0;
            char ch = k.first;
            for (int i = 0; i < n; i++)
            {
                if(s[i] == ch) conse = 0;
                else conse++;
                mxConse = max (mxConse, conse) ;
            }
            temp = min( temp, mxConse) ;
        }
        
        cout << floor( log2(temp) ) + 1 << endl;
    }
    return 0;
}