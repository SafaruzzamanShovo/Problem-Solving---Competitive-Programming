// Codeforces - MEX Destruction
// Codeforces Round 994 (Div. 2)
// https://codeforces.com/contest/2049/problem/A


#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        int n; cin >> n; 
        vector<int> v(n), zeros;

        for (int i = 0; i < n; ++i)
        {
            cin  >> v[i];
            if(v[i] == 0) zeros.push_back(i);
        }

        int zeroF = 0, zeroB = 0;
        int i = 0;
        while(v[i] == 0){
            zeroF++;
            i++;
        }

        i = n-1;
        while(v[i] == 0){
            zeroB++;
            i--;
        }

        if(zeros.size() == n) cout << 0 << endl;
        else if(zeros.size()-zeroF-zeroB == 0) cout << 1 << endl;
        else cout << 2 << endl;

    }

    return 0;
}