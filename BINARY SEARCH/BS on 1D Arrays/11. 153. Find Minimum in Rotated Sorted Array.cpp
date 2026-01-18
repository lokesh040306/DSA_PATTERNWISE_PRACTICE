/*

class Solution {
public:
    int findMin(vector<int>& nums) {
        
        // Binary Search

        int n = nums.size(), mini = INT_MAX;
        int start = 0, end = n - 1;

        while(start <= end) {
            int mid = start + (end - start) / 2;

            // check if the current subarray is already sorted
            if(nums[start] <= nums[end]) {
                mini = min(mini, nums[start]);
                break;
            }

            // left side is sorted
            if(nums[start] <= nums[mid]) {
                // left side is sorted
                mini = min(mini, nums[start]);
                start = mid + 1;
            }
            else {
                mini = min(mini, nums[mid]);
                end = mid - 1;
            }
        } 

        return mini;
    }
};

*/