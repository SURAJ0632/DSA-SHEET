#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;

        while (n != 0) {
            int rem = n % 10;
            product *= rem;
            sum += rem;
            n /= 10;
        }

        return product - sum;
    }
};

int main() {
    Solution sol;
    int n = 234;
    int result = sol.subtractProductAndSum(n);
    cout << "Result: " << result << endl;
    return 0;
}
