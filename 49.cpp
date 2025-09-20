#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Map to store sorted string as key and list of anagrams as value
        unordered_map<string, vector<string>> mp;

        // Iterate through each word in the input list
        for (const string& s : strs) {
            string sortedStr = s;
            sort(sortedStr.begin(), sortedStr.end()); // Sort characters in the word
            mp[sortedStr].push_back(s); 
        }

        // Prepare the result from the map
        vector<vector<string>> anagrams;
        for (const auto& entry : mp) {
            anagrams.push_back(entry.second);
        }

        return anagrams;
    }
};
