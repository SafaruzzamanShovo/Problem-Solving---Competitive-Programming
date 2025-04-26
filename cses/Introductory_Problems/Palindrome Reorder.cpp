#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase int t; cin>>t; for(int tt=1;tt<=t;tt++)

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s; cin >> s; 
    map< char, int > mp;
    for (int i = 0; i < s.size(); i++) mp[s[i]]++;

    char mid = '0'; int cnt = 0;
    string ans = "";
    for(auto i: mp){
        if(i.second % 2) { cnt++;  mid = i.first; }
        for (int j = 0; j < i.second / 2; j++)  ans += i.first;
    }

    if( cnt > 1) cout << "NO SOLUTION" << endl;
    else{
        cout << ans ;
        if(mid != '0') ans += mid;
        for (int i = ans.size()-1; i >= 0; i--) cout << ans[i];
    }
    return 0;
}