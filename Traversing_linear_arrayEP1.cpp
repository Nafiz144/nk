#include <bits\stdc++.h>
using namespace std;
/*1.[initialize counter .] set k;=LB.
2.repeat steps 3 and 4 while k<UB.
3.[visit element .].Apply Proses to LA[k].
4.[increase counter .]set k:=k+1;
[end of step 2 loop.]
5 .exit */
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int c = 0;
    int k = 5;
    while (k <= 5)
    {
        a[k] = +1;
        k = k + 1;
    }
    for (int i = 0; i < k; i++)
    {
        cout << a[k];
    }
}