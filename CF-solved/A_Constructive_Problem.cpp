/*
        Codeforces Round 866 (Div. 1)
        Codeforces 1819A
        Constructive Problem
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
        int n, mx = INT_MIN; cin >> n;
        bool yes = true, no = false, extra = false;
        vector< int > v(n);
        map < int , int > mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
            mx = max (mx, v[i]);
            if(mp[v[i]] > 1) extra = true;
        }
        int mex = 0;
        for(auto i : mp){                           // finding mex
            if(i.first == mex) mex++;
            else break;
        }

        int st = -1, en = -1;
        for (int i = 0; i < n; i++)                 // staring and ending position of (mex+1)
        {
            if(v[i] == mex+1){
                if(st == -1) st = i;
                en = i;
            } 
        }

        if(mp[mex+1]>0){
            for (int i = st; i <= en; i++)         // no smaller one can be eleminated
            {
                mp[v[i]]--;
                if(mp[v[i]] == 0 and v[i] < mex){
                    yes = false;
                    break;
                }
            }
        }
        else if(!extra && mx<mex) yes = false;


        if(yes and !no) cout << "Yes" << endl;
        else cout << "No" << endl;  
    }
    return 0;
}