/*
        Codeforces Round 867 (Div. 3)
        Codeforces 1822E
        Making Anti-Palindromes
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
        int n, cnt = 0; cin>> n;
        string s; cin>> s;
        bool b = true;
        map< char , int > mp;
        for(int i=0; i< n; i++){
            mp[s[i]]++;
            if(mp[s[i]]>n/2){
                b = false;
                break;
            }
        }
        if( !b || (n%2) ){
            cout << -1 <<endl;
            continue;
        }
        int mx=0, arr[26] ={0};
        for(int i =0; i < n/2; i++){
            if(s[i]==s[n-1-i]){ 
                cnt++;
                arr[s[i]-'a']++;
                mx = max(mx, arr[s[i]-'a']);
            }
        }
        if(2*mx > cnt)
            cout<< mx <<endl;
        else 
            cout<< (cnt + 1) / 2 <<endl;
    }
    return 0;
}