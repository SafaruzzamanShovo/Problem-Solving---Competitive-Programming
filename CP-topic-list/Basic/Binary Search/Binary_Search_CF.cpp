// Codeforces - Binary Search
// ITMO Academy: pilot course : Binary Search


#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

bool aseNaki(vector<int> v, int x){
	int left =  0, right = v.size()-1, mid;

	while(left <= right){
		mid = (left + right) / 2;
  	if(v[mid] == x) return true;
		else if( v[mid] < x) left = mid + 1;
		else right = mid - 1 ;
	}

	if(v[mid] == x) return true;
	
	return false;
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

	sort(v.begin(), v.end());

	for (int i = 0; i < k; ++i)
	{
		int x; cin >> x;
		if(aseNaki(v, x)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}