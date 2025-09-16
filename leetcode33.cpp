#include <iostream>
#include <vector>
using namespace std;

int searchInRotatedArray(const vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target)
            return mid;

        // Check if left half is sorted
        if (nums[low] <= nums[mid]) {
            if (nums[low] <= target && target < nums[mid])
                high = mid - 1;  // Target is in the left half
            else
                low = mid + 1;   // Target is in the right half
        }
        // Otherwise, right half must be sorted
        else {
            if (nums[mid] < target && target <= nums[high])
                low = mid + 1;   // Target is in the right half
            else
                high = mid - 1;  // Target is in the left half
        }
    }

    return -1;  // Target not found
}

int main() {
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    int index = searchInRotatedArray(nums, target);
    if (index != -1)
        cout << "Target found at index: " << index << endl;
    else
        cout << "Target not found in the array." << endl;

    return 0;
}
