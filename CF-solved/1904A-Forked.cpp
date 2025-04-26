#include<bits/stdc++.h> 
using namespace std;

#define ll long long
#define testcase ll t; cin >> t; while(t--)

int main(){
    testcase{
        ll a,b, kx,ky, qx,qy, cnt = 0;
        cin >> a >> b >> kx >> ky >> qx >> qy;
        set< pair<ll,ll> > ans;

        ll X[8] = { b, a, -a, -b, -b, -a, a, b };
        ll Y[8] = { a, b, b, a, -a, -b, -b, -a };

        for (int i = 0; i < 8; i++) {
 
            int x = kx + X[i];
            int y = ky + Y[i];

            // cout << x << ' ' << y << endl;
     
            for(int j = 0; j < 8; j++){
                int xx = x + X[j];
                int yy = y + Y[j];

                if(xx == qx and yy == qy) {
                    ans.insert(make_pair(x, y));
                }
            }
        }

        cout << ans.size() << endl;
    }
}