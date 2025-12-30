/*

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        // TWO-POINTERS APPROACH
        
        int n = nums.size();
        // Left pointer for the position of the next non-zero element
        int left = 0, right = 0;

        while(right < n) {
            // If the right pointer finds a non-zero element
            if(nums[right] != 0) {
                swap(nums[left], nums[right]);
                left++;
            }
            right++;
        }
    }
};

*/