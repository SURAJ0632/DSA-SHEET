#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    int original = x;
    int rev = 0;

    while (x > 0)
    {
        int digit = x % 10;      
        rev = rev * 10 + digit;   
        x = x / 10;               
    }

    if (rev == original)
        cout << "true" << endl;  
    else
        cout << "false" << endl;  

    return 0;
}
