#include <iostream>
#include <vector>
using namespace std;

int findPivotInRotatedArray(const vector<int>& nums) {
    int low = 0, high = nums.size() - 1;
    
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] > nums[high])
            low = mid + 1;
        else
            high = mid;
    }
    return low; // Index of pivot (smallest element)
}

int main() {
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int pivot = findPivotInRotatedArray(nums);
    cout << "Pivot (min element) index: " << pivot << ", value: " << nums[pivot] << endl;
    return 0;
}
