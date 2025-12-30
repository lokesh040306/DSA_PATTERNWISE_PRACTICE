/*

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        // TWO-POINTERS
        int left = 0, right = 0;
        int n = nums.size();

        while(right < n) {
            // If we find a new unique element
            if(nums[left] != nums[right]) {
                nums[left + 1] = nums[right];
                left++;
            }
            right++;
        }
        return left + 1;
    }
};

*/