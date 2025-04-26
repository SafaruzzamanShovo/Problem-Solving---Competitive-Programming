/*
        Codeforces Round 871 (Div. 4)
        Codeforces 1829D
        Gold Rush
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int b = 0 ;

void op(int n, int k){
    if( n == k) b = 1;
    if(n % 3 != 0) return;
    if(b == 1) return;

    int left = n/3;
    int right = left * 2;

    op(left, k);
    op(right, k); 
}

int main() {
    int t; cin>> t;
    while(t--){
        int n, k;  cin >> n >> k;
        b = 0;
        op(n, k);
        if( b == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}