#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase int t; cin>>t; for(int tt=1;tt<=t;tt++)

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s; cin >> s;
    vector< string > ans;

    sort(s.begin(),s.end());
    do{
        ans.push_back(s);
    }while(next_permutation(s.begin(), s.end()));

    cout << ans.size() << endl;
    for(auto i : ans) cout << i << endl;
    return 0;
}