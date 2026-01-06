/*

class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        
        // Sliding Window

        int n = nums.size();
        int left = 0, right = 0;
        int maxLen = 0;
        
        unordered_map<int, int> freq;

        while(right < n) {

            // Add new element frequency, only new element can violet the window
            freq[nums[right]]++;
            
            // shrink the window from left until we get these new element
            while(freq[nums[right]] > k) {
                freq[nums[left]]--;
                left++;
            }

            // find the maximum length of valid window, it is ensured by above while loop
            maxLen = max(maxLen, right - left + 1);

            right++;
        }

        return maxLen;
    }
};

*/