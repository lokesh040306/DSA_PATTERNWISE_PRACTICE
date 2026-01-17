/*

class Solution {
    int firstOccurance(vector<int>& nums, int target){
        int start = 0, end = nums.size() - 1;
        int first = -1;

        while(start <= end) {
            int mid = (start + end) / 2;

            if(nums[mid] == target) {
                first = mid;
                end = mid - 1;
            }
            else if(nums[mid] < target) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
    return first;
    }

    int lastOccurance(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1;
        int last = -1;
        
        while(start <= end) {
            int mid = (start + end) / 2;

            if(nums[mid] == target) {
                last = mid;
                start = mid + 1;
            }
            else if(nums[mid] < target) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
    return last;
    }

public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstOccurance(nums, target);
        if(first == -1) return {-1, -1}; // Early Return
        int last = lastOccurance(nums, target);
        return {first, last};
    }
};

*/