#include <bits/stdc++.h>
using namespace std;
/*traverses a linear array LA with
lower bound LB and upper bound UB */
int main()
{
    int LA[] = {1, 2, 3, 4, 5}; // initialize the linear array
    int LB = 0;                 // lower bound
    int UB = 4;                 // upper bound

    // traverse the array using a for loop
    for (int i = LB; i <= UB; i++)
    {
        std::cout << LA[i] << " "; // print the current element
    }
    std::cout << std::endl;
}