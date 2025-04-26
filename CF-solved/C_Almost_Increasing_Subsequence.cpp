/*
    Codeforces Round 869 (Div. 2)
    Codeforces 1818C : Almost Increasing Subsequence
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define testcase \
    int t;       \
    cin >> t;    \
    for (int tt = 1; tt <= t; tt++)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> v(n), pre(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    pre[1] = 1;
    int cnt = 0;
    for (int i = 2; i <= n; i++)
    {
        if (v[i - 1] > v[i - 2])
        {
            pre[i] = pre[i - 1] + 1;
            cnt = 0;
        }
        else if (v[i - 1] <= v[i - 2] && cnt == 0)
        {
            pre[i] = pre[i - 1] + 1;
            cnt++;
        }
        else
        {
            pre[i] = pre[i - 1];
        }
    }
    // for (auto i : pre) cout<< i <<' '; cout<< endl;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        int ans = pre[b] - pre[a - 1];
        if (pre[a - 1] == pre[a])
            ans++;
        if (pre[a + 1] == pre[a])
            ans++;
        if (b - a == 0)
            ans = 1;
        else if (b - a == 1)
            ans = 2;
        else
        {
            ans = max(2, ans);
        }
        cout << ans << endl;
    }

    return 0;
}