#include <iostream>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num < 2) return true;
        long long left = 2, right = num / 2;
        while (left <= right) {
            long long mid = left + (right - left) / 2;
            long long guessSquared = mid * mid;

            if (guessSquared == num) {
                return true;
            } else if (guessSquared > num) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return false;
    }
};
int main() {
    Solution sol;
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (sol.isPerfectSquare(num)) {
        cout << num << " is a perfect square." << endl;
    } else {
        cout << num << " is not a perfect square." << endl;
    }

    return 0;
}
