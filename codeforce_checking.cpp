#include <iostream>
#include <string>
using namespace std;

void solve()
{
    char c;
    cin >> c;
    string str = " codeforces";

    if (str.find(c) != string::npos)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}