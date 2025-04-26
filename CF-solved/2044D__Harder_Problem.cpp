// Codeforces 2044 D - Harder Problem
// Codeforces Round 993 (Div. 4)

// platform - Prob_name
// link


#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin>> t;
	while(t--){
		int n;  cin >> n;
	    vector<int> v(n);
	    vector<bool> usd(n+1, 0); 
	    vector<int> freq(n+1, 0); 
	    for (int i = 0; i < n; ++i)
	    {
	    	cin >> v[i];
	    }

	    int nxt = 1;
	    for (int i : v)  usd[i] = true;

	    for (int i : v) {
	        if (freq[i] == 0) {
	            cout << i << " ";
	            freq[i]++;
	        } else {
	            while (usd[nxt]) nxt++;
	            usd[nxt] = true; 
	            cout << nxt << " ";
	        }
	    }

	    cout << endl;
	}

	return 0;
}