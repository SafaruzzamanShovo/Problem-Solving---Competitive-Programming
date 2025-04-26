#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase int t; cin>>t; for(int tt=1;tt<=t;tt++)

void hanoi(int n, int a, int b, int c){
    if( n > 0){
        hanoi(n-1, a, c, b);
        cout << a << ' ' << c << endl;
        hanoi(n-1, b, a, c);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;  cin >> n;
    cout << (1 << n) -1 << endl;
    hanoi(n,1,2,3);
    return 0;
}