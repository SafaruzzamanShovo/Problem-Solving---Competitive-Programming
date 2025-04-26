// Codeforces - Closest to the Right
// ITMO Academy: pilot course » Binary Search » Step 1 » Practice » C
// https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/C

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int indxDao(vector<int> v, int x){
	int left =  0, right = v.size()-1, mid, ans = 0;

	while(left <= right){
		mid = (left + right) / 2;

		// cout << left << ',' << right << "-" << mid << " -> " << v[mid] << endl;

		if( v[mid] >= x) right = mid - 1 , ans = mid;
		else left = mid + 1;
	}
	
	return ans+1;
}

int main(){
 	ios_base::sync_with_stdio(0);
  	cin.tie(0);
	int n, k; cin >> n >> k;
	vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}

	for (int i = 0; i < k; ++i)
	{
		int x; cin >> x;
		if(x > v[v.size()-1]) cout << v.size()+1 << endl; 
		else cout << indxDao(v, x) << endl;
	}

	return 0;
}