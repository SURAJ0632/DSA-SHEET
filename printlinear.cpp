#include <bits/stdc++.h>
using namespace std;

void printLinear(int n)
{
    if (n == 0) return;   // base case

    printLinear(n - 1);   // first go "down" with recursion
    cout << n << endl;    // then print while "coming back"
}

int main()
{ 
    printLinear(5);
    return 0;
}
