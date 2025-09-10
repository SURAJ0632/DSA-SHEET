#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        vector<string> mapping = {
            "",    // 0
            "",    // 1
            "abc", // 2
            "def", // 3
            "ghi", // 4
            "jkl", // 5
            "mno", // 6
            "pqrs",// 7
            "tuv", // 8
            "wxyz" // 9
        };

        vector<string> result;
        string current;

        function<void(int)> backtrack = [&](int index) {
            if (index == digits.size()) {
                result.push_back(current);
                return;
            }

            string letters = mapping[digits[index] - '0'];
            for (char c : letters) {
                current.push_back(c);
                backtrack(index + 1);
                current.pop_back();
            }
        };

        backtrack(0);
        return result;
    }
};

int main() {
    Solution sol;
    string digits;
    cout << "Enter digits (2-9): ";
    cin >> digits;

    vector<string> ans = sol.letterCombinations(digits);

    cout << "Letter combinations are:\n";
    for (auto &s : ans) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}
