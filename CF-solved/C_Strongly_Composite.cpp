/*
        Codeforces Round 868 (Div. 2)
        Codeforces 1823C
        Strongly Composite
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase int t; cin>>t; for(int tt=1;tt<=t;tt++)

const int N = 1e7+69;
bool nums[N];
vector <int > primes;
void sieve(){
    for( int i=2; i*i<= N; i++){
        if(nums[i]) continue;
        for(int j = i*i; j <= N; j+= i)
            nums[j] = true;
    }
    for(int i=2;i<=N; i++)
    if(!nums[i]) primes.push_back(i);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    sieve();
    testcase{
        int n; cin >> n;
        map< int, int > mp;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
            int temp = v[i];
            for(auto p : primes){
                if(p > temp) break;
                while(temp % p == 0){
                    temp /= p;
                    mp[p]++;
                }
            }
            if(temp > 1) mp[temp]++;
        }

        int ans = 0, extra = 0;
        for(auto i : mp){
            ans += i.second / 2;
            extra += (i.second % 2);
        }
        ans += extra / 3;

        cout << ans << endl;
    }
    return 0;
}