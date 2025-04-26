// Codeforces - Fast search
// ITMO Academy: pilot course » Binary Search » Step 1 » Practice » D
// https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/D


#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n; cin >>n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i) cin >> v[i];
	sort(v.begin(), v.end());

	int m ; cin >> m;
	while(m--){
		int a, b; cin >> a >> b;
		cout << (upper_bound(v.begin(), v.end(), b) -v.begin()) - (lower_bound(v.begin(), v.end(), a) - v.begin()) << ' ';
	}

	return 0;
}