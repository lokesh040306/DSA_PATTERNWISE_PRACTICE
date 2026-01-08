/*

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        
        int n = nums.size();
        int left = 0, right = 0;
        int numCount = 0;
        int maxLen = 0;

        while(right < n) {
            // Increasing the zero count for each occurrance
            if(nums[right] != 1) {
                numCount++;
            }

            // Checking for valid window with zero count less than 'k'
            if(numCount > 1){
                if(nums[left] == 0) {
                    numCount--;
                }
                left++;
            }

            // Calculating Maximum Possible Length - 1, as we are deleting the element
            if(numCount <= 1) {
                maxLen = max(maxLen, right - left);
            }
            right++;
        }

        return maxLen;
    }
};

*/