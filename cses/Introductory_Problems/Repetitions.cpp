#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase int t; cin>>t; for(int tt=1;tt<=t;tt++)

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s; cin >> s;
    int mx = 0, cnt = 0;
    for (int i = 1; i < s.size(); i++)
    {
        if(s[i] == s[i-1]){
            cnt++;
            mx = max(mx, cnt);
        }
        else cnt = 0;
    }

    cout << mx + 1 << endl;

    return 0;
}