/*

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        // PrefixSum + Hashmap

        int n = nums.size();
        unordered_map<int, int> freq;
        
        int preSum = 0;
        int count = 0;
        
        for(int i = 0; i < n; i++) {
            
            // find prefix-sum 
            preSum += nums[i];
            
            // if prefix-sum is equal to 'k'
            if(preSum == k) count++;
            
            // if prefix-sum - 'k' is present in hashmap
            if(freq.find(preSum - k) != freq.end()) {
                count += freq[preSum - k];
            }
            
            // map the current element into hashmap
            freq[preSum]++;
        }
        
        return count;
    }
};

*/