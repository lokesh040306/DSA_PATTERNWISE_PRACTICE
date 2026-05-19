/*

class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        
        // PrefixSum + Hashmap

        int n = nums.size();

        unordered_map<int, int> freq;
        freq[0] = 1;

        int preSum = 0;
        int count = 0;

        for(int i = 0; i < n; i++) {

            preSum += nums[i];

            if(freq.find(preSum - goal) != freq.end()) {
                count += freq[preSum - goal];
            }

            freq[preSum]++;
        }

        return count;
    }
};

*/