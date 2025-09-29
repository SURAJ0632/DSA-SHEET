#include <bits/stdc++.h>
using namespace std;

// Generate Fibonacci string up to n
string fibonacciString(int n) {
    if (n == 0) return "A";
    if (n == 1) return "B";

    string a = "A", b = "B", c;
    for (int i = 2; i <= n; i++) {
        c = b + a;   // Fibonacci word rule
        a = b;
        b = c;
    }
    return b;
}

int main() {
    srand(time(0));

    int n = rand() % 10 + 5;  // random length between 5 and 14
    string fibStr = fibonacciString(n);

    cout << "Fibonacci string F(" << n << ") = " << fibStr << endl;

    return 0;
}
