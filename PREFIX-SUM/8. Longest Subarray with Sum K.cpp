/*

class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        
        // PefixSum + Hashmap

        int n = arr.size();
        int preSum = 0;
        int maxLen = 0;

        unordered_map<int, int> mpp;
        mpp[0] = -1;

        for(int i = 0; i < n; i++) {

            preSum += arr[i];

            if(mpp.find(preSum - k) != mpp.end()) {
                int len = i - mpp[preSum - k];
                maxLen = max(maxLen, len);
            }
            
            // store first occurrence only
            if(mpp.find(preSum) == mpp.end()) {
                mpp[preSum] = i;
            }
        }

        return maxLen;
    }
};

*/