#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result(2, -1);  // Default result [-1, -1]
        int n = nums.size();
        
        if (n == 0) return result;

        // Find the first occurrence of target
        int start = 0, end = n - 1;
        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        // Check if target exists at the found index
        if (start >= n || nums[start] != target) {
            return result;
        }
        result[0] = start;  // First position found

        // Find the last occurrence of target
        end = n - 1;  // Reset end pointer
        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] > target) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        result[1] = end;  // Last position found
        return result;
    }
};

// Optional: You can use this main function to test the code
int main() {
    Solution sol;
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    vector<int> result = sol.searchRange(nums, target);

    cout << "First and last positions of " << target << ": ";
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}
