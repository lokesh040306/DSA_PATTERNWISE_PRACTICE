/*

class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        
        // Sliding Window + Hashmap

        int n = nums.size();
        int left = 0, right = 0;
        long long sum = 0, maxSum = 0;
        unordered_set<int> seen;

        while(right < n) {
            // Removing the duplicate of the current inserting number
            while(seen.count(nums[right])) {
                seen.erase(nums[left]);
                sum -= nums[left];
                left++;
            }

            // Storing and Adding each unique elements
            seen.insert(nums[right]);
            sum += nums[right];

            // Checking for Maximum Sum
            if(right - left + 1 == k) {
                maxSum = max(maxSum, sum);
                // moving the window forward i.e. shrinking from the left
                seen.erase(nums[left]);
                sum -= nums[left];
                left++;
            }
            right++;
        }
        return maxSum;
    }
};

*/