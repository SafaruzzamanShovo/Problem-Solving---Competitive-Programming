#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll n; cin>>n;

	for (int i = 0; i <= n; ++i)
	{
		for (int j = 1; j <= n-i; ++j)
		{
			cout<<"  ";
		}
		for (int j = 0; j <= i; ++j)
		{
			if(j==i) {cout<<j; continue;}
			cout<<j<<' ';
		}
		for (int j = i-1; j >= 0; --j)
		{
			//if(j==0) {cout<<j; continue;}
			cout<<' '<<j; 
		}
		cout<<endl;
	}
	for (int i = n-1; i >=0; --i)
	{
		for (int j = 1; j <= n-i; ++j)
		{
			cout<<"  ";
		}
		for (int j = 0; j <= i; ++j)
		{
			if(j==i) {cout<<j; continue;}
			cout<<j<<' ';
		}
		for (int j = i-1; j >= 0; --j)
		{
			//if(j==0) {cout<<j; continue;}
			cout<<' '<<j; 
		}
		cout<<endl;
	}
}