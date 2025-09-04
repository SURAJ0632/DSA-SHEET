#include <bits/stdc++.h>
using namespace std;

int cnt = 0;

void printName()
{
    if (cnt == 5)
        return;

    string name = "Hello";
    cout << name << endl;
    cnt++;
    printName();
};

int main()
{

    printName();
    return 0;
}