/*

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        // TWO-POINTERS
        
        int n = nums.size();
        // Left pointer for the position of the next non-val element
        int left = 0, right = 0;

        while(right < n) {
            // If the right pointer finds a non-val element
            if(nums[right] != val) {
                swap(nums[left], nums[right]);
                left++;
            }
            right++;
        }

        return left;
    }
};

*/