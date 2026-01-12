/*

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        // Prefix Sum

        int totalSum = 0;
        for(int i = 0; i < nums.size(); i++) {
            totalSum += nums[i];
        }

        int prefixSum = 0;
        for(int i = 0; i < nums.size(); i++) {
            // find prefix sum
            prefixSum += nums[i];

            // find left side sum
            int leftSum = prefixSum - nums[i];
            // find right side sum
            int rightSum = totalSum - leftSum - nums[i];

            // check for pivot index
            if(leftSum == rightSum) {
                return i;
            }
        }

        return -1;
    }
};

*/