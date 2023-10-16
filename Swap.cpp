#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cout << "Enter the value of A:" << endl;
    cin >> a;
    int b;
    cout << "Enter the value of B:" << endl;
    cin >> b;
    cout << "A And B value Before swap:"
         << "A=" << a << "  And"
         << "     "
         << "B=" << b << endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "The value is B: " << temp << endl;
    return 0;
}