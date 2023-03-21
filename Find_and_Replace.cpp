#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a[26];
    for (int i = 0; i < 26; i++)
    {

        a[i] = -1;
    }
    for (int i = 0; i < n; i++)
    {
        int curr = (s[i] - 'a');
        if (a[curr] == -1)
        {
            a[curr] = (i % 2);
        }
        else
        {

            if (a[curr] != (i % 2))
            {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
}
int main()
{

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}
