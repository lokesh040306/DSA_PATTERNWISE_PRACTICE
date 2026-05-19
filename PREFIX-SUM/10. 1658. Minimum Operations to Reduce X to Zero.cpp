/*

class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        
        // PrefixSum + Sliding Window

        int n = nums.size();

        int total = 0;
        for(int i = 0; i < n; i++) {
            total += nums[i];
        }

        int sum = total - x;

        // Edge cases
        if(sum < 0) return -1;
        if(sum == 0) return n;

        // sliding window
        int left = 0, right = 0;
        int temp = 0, maxLen = -1;

        while(right < n) {

            temp += nums[right];

            while(temp > sum) {
                temp -= nums[left];
                left++;
            }

            if(temp == sum) {
                maxLen = max(maxLen, right - left + 1);
            }

            right++;
        }

        return maxLen == -1 ? -1 : n - maxLen;
    }
};

*/