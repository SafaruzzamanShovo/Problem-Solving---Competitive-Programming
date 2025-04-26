// Codeforces - Closest to the Left
// ITMO Academy: pilot course : B. Closest to the Left


#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int indxDao(vector<int> v, int x){
	int left =  0, right = v.size()-1, mid;

	while(left < right){
		mid = (left + right) / 2;
		// cout << left << ',' << right << "-" << mid << " -> " << v[mid] << endl;

		if( v[mid] > x) right = mid - 1 ;
		else left = mid + 1;
		mid = (left + right) / 2;
	}
	
	return mid;
}

int main(){
   ios_base::sync_with_stdio(0);
  	cin.tie(0);
	int n, k; cin >> n >> k;
	vector<int> v(n+1);
	v[0] = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i+1];
	}
	v.push_back(INT_MAX);

	for (int i = 0; i < k; ++i)
	{
		int x; cin >> x;
		cout << indxDao(v, x) << endl;
	}

	return 0;
}