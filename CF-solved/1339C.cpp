#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, X = 0, i;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    cout << "Enter the element that you want to find : ";
    cin >> a;



    for (i = 0; i < n; i++)
    {
        if (arr[i] == a)
        {
            X ++;
            break;
        }
        else
        {
            X = 0;
        }
    }
    if (X == 0)
       {cout << " Your searched element is not present";} 
    else
        {cout << " Your searched element is at index no :" <<i;}
    return 0;
}