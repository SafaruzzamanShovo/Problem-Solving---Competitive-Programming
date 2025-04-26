#include<bits/stdc++.h> 
using namespace std;

#define ll long long
#define testcase ll t; cin >> t; while(t--)

int main(){
    testcase{
        string s; cin >> s;
        int zero = 0, one = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            if(s[i] == '1') {
                one++;
                s[i] = '0';
            }
            else {
                zero++;
                s[i] = '1';
            }
        }


        for (int i = 0; i < s.size(); ++i)
        {
            if(s[i] == '0'){
                if(zero == 0) break;
                zero--;
            }
            else{
                if(one == 0) break;
                one--;
            }        
        }

        cout << zero+one << endl;
    }
}