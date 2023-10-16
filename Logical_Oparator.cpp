#include <iostream>
using namespace std;

int main()
{
    bool a;
    cout << "Enter the value of a:" << endl;
    cin >> a;

    bool b;
    cout << "Enter the value of b:" << endl;
    cin >> b;

    bool c;
    cout << "Enter the value of c:" << endl;
    cin >> c;

    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    cout << "c=" << c << endl;

    cout << "Basic Operation" << endl;
    cout << "a && b: " << (a && b) << endl;
    cout << "a && c: " << (a && c) << endl;
    cout << "c && b: " << (c && b) << endl;

    if (a && b == 1 || a && c == 1 || c && b == 1)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }

    return 0;
}
