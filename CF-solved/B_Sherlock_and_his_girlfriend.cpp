// ICM Technex 2017 and Codeforces Round 400
// 776B - Sherlock and his girlfriend

#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 9;

int main(){
    int arr[N];
    memset(arr,-1,sizeof(arr));
    for (int i = 2; i <= N; i++)
    {
        if(arr[i]!=-1) continue;

        arr[i] = 1;
        for (int j = i+i; j <= N; j+=i)
        {
            arr[j] = 2;
        }
        
    }
    

    int n; cin>>n;
   
    if(n<3) cout<<1<<endl;
    else cout<<2<<endl;

    cout<<1<<' ';
    for (int i = 2; i <= n; i++)
    {
        cout<<arr[i+1]<<' ';
    }
    
    
}