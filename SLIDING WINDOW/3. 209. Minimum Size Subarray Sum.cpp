/*

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        // Sliding window + prefixSum

        int n = nums.size();
        int left = 0, right = 0;
        int prefixSum = 0;
        int minLength = INT_MAX;

        while(right < n) {
            // Initially calculating the sum
            prefixSum += nums[right];

            // If sum is greater, trying to decrease its length
            while(prefixSum >= target) {
                minLength = min(minLength, right - left + 1);
                prefixSum -= nums[left];
                left++;
            }

            right++;
        }

        return minLength == INT_MAX ? 0 : minLength;
    }
};

*/