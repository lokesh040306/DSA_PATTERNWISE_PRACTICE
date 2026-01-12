/*

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        // Prefix Sum

        vector<int> ans;
        int prefixSum = 0;

        // Building Prefix Sum array
        for(int i = 0; i < nums.size(); i++) {
            prefixSum += nums[i];
            ans.push_back(prefixSum);
        }

        return ans;
    }
};

*/