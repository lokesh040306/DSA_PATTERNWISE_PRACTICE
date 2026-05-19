/*

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        // PefixSum + Hashmap

        int n = nums.size();
        int preSum = 0;
        int maxLen = 0;

        unordered_map<int, int> mpp;
        mpp[0] = -1;

        for(int i = 0; i < n; i++) {

            preSum += (nums[i] == 0) ? -1 : nums[i];

            if(mpp.find(preSum) != mpp.end()) {
                int len = i - mpp[preSum];
                maxLen = max(maxLen, len);
            }
            else {
                mpp[preSum] = i;
            }
        }

        return maxLen;
    }
};

*/