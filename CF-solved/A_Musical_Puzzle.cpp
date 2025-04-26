/*
        Codeforces Round 874 (Div. 3)
        Codeforces 1833A
        Musical Puzzle
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
        int n; cin >> n;
        string ss; cin >> ss;
        map< string, int > mp;
        for (int i = 0; i < n-1; i++)
        {
            string s = "";
            s += ss[i];
            s += ss[i+1];
            mp[s]++;
        }
        cout << mp.size() << endl;
    }
    return 0;
}