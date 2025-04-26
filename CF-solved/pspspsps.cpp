// Codeforces 2049A - pspspsps
// Codeforces Round 994 (Div. 2)
// https://codeforces.com/contest/2049/problem/B

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        int n; cin >> n; 
        string ss; cin >> ss;
        int s = 0, p = 0, dt = 0, mxS = INT_MIN, mnP = -1;


        for (int i = 0; i < n; ++i)
        {
            if(ss[i] == 's') s++;
            if(ss[i] == 'p') p++;
            if(ss[i] == '.') dt++;

            if(ss[i] == 's') mxS = i;
            if(ss[i] == 'p' and mnP == -1) mnP = i;
        }



        if(s == 0 or p == 0){ cout << "YES" << endl; continue;}

        if(mxS > mnP) { cout << "NO" << endl; continue;}

        if( mxS > 0 and mnP < n-1) { cout << "NO" << endl; continue;}

        cout << "YES" << endl;
    }

    return 0;
}