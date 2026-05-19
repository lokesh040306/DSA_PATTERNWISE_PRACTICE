/*

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        // PrefixSum + Hashmap

        int n = nums.size();
        unordered_map<int, int> freq;
        freq[0] = -1;
        
        int preSum = 0;
        
        for(int i = 0; i < n; i++) {
            
            // find prefix-sum 
            preSum += nums[i];

            int rem = preSum % k;
            
            // if prefix-sum - 'k' is present in hashmap
            if(freq.find(rem) != freq.end()) {
                if(i - freq[rem] >= 2) {
                    return true;
                }
            }
            else {
                freq[rem] = i;
            }
        }
        
        return false;
    }
};

*/