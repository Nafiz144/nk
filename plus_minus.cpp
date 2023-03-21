#include <iostream>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if ((a + b) == c)
        cout << "+" << endl;
    else if ((a - b) == c)
        cout << "-" << endl;
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
