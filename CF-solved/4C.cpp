#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string name;
    cin>> n;
    map<string, int> freq;
    while(n--){
        cin>> name;
        freq[name]++;
        if(freq[name] == 1){
            cout<< "OK" << endl;
        }
        else{
            cout<< name<< freq[name]-1 << endl;
        }
    }
}