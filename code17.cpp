#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> letterCombinations(string digits)
    {
        if (digits.empty())
            return {};

        vector<string> mapping = {
            "",
            "",
            "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

        vector<string> result;
        string current;

        function<void(int)> backtrack = [&](int index)
        {
            if (index == digits.size())
            {
                result.push_back(current);
                return;
            }

            string letters = mapping[digits[index] - '0'];
            for (char c : letters)
            {
                current.push_back(c);
                backtrack(index + 1);
                current.pop_back();
            }
        };

        backtrack(0);
        return result;
    }
};

int main()
{
    Solution sol;
    string digits;
    cout << "Enter digits (2-9): ";
    cin >> digits;

    vector<string> ans = sol.letterCombinations(digits);

    cout << "Letter combinations are:\n";
    for (auto &s : ans)
    {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}
