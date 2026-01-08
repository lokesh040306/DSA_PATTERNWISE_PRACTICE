/*

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        // Sliding Window

        int n = nums.size();
        int left = 0, right = 0;
        int zeroCount = 0;
        int maxLen = 0;

        while(right < n) {
            // Increasing the zero count for each occurrance
            if(nums[right] == 0) {
                zeroCount++;
            }

            // Checking for valid window with zero count less than 'k'
            if(zeroCount > k) {
                if(nums[left] == 0) {
                    zeroCount--;
                }
                left++;
            }

            // Calculating Maximum Possible Length
            if(zeroCount <= k) {
                maxLen = max(maxLen, right - left + 1);
            }
            right++;
        }

        return maxLen;
    }
};

*/