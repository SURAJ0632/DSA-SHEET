#include <iostream>
#include <climits> // For INT_MAX and INT_MIN

using namespace std;

class Solution {
public:
    int reverse(int x) {
        int ans = 0;

        while (x != 0) {
            int digit = x % 10;

            // Check for overflow before multiplying and adding
            if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && digit > 7)) {
                return 0;
            }
            if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && digit < -8)) {
                return 0;
            }

            ans = ans * 10 + digit;
            x /= 10;
        }

        return ans;
    }
};

// Optional: for testing
int main() {
    Solution sol;
    int num = 123;
    cout << "Reversed: " << sol.reverse(num) << endl;

    num = -456;
    cout << "Reversed: " << sol.reverse(num) << endl;

    num = 1534236469; // This will overflow and return 0
    cout << "Reversed: " << sol.reverse(num) << endl;

    return 0;
}
