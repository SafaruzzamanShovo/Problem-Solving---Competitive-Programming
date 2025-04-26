#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define testcase ll t; cin >> t; while(t--)


int main()
{

	testcase{
		ll n,k; cin >> n >> k;
		ll arr[n], mul = 1LL;

		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
			// mul *= arr[i];
			mul = (mul % k) * arr[i];
		}

		if( mul % k == 0 ) cout << 0 << endl;
		else if( k == 4 ){
			bool four_mod = false;
			for (int i = 0; i < n; ++i)
			{
				if((arr[i] + 1) % 4 == 0){
					four_mod = true;
					break;
				} 
			}

			if (four_mod){
				cout << 1 << endl;
				continue;
			}

			if (mul % 2 == 1) cout << 2 << endl;
			else cout << 1 << endl;
		}
		else{
			ll x = INT_MAX;
			for (int i = 0; i < n; ++i)
			{
				x = min(x, k - ( arr[i] % k));
			}

			cout << x << endl; 
		}


	}
	return 0;
}

