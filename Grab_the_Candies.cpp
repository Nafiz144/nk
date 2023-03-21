#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, se = 0, so = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            se += a[i];
        else
            so += a[i];
    }
    if (se > so)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}