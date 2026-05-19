/*

class Solution {
    bool isPossible(vector<int> &nums, int target, int index) {

        // Base case
        if(target == 0) {
            return true;
        }
        
        if(index == 0) {
            return (target == nums[index]);
        }
        
        bool notPick = isPossible(nums, target, index - 1);
        
        bool pick = false;
        if(target - nums[index] >= 0) {
            pick = isPossible(nums, target - nums[index], index - 1);
        }
        
        return (pick || notPick);
    }
    
    bool isPossibleMem(vector<int> &nums, int target, int index, vector<vector<int>> &dp) {

        // Base case
        if(target == 0) {
            return true;
        }
        
        if(index == 0) {
            return (target == nums[index]);
        }

        if(dp[index][target] != -1) {
            return dp[index][target];
        }
        
        bool notPick = isPossibleMem(nums, target, index - 1, dp);
        
        bool pick = false;
        if(target - nums[index] >= 0) {
            pick = isPossibleMem(nums, target - nums[index], index - 1, dp);
        }
        
        return dp[index][target] = (pick || notPick);
    }

public:
    bool canPartition(vector<int>& nums) {
        
        int n = nums.size();

        int totalSum = 0;
        for(int i = 0; i < n; i++) {
            totalSum += nums[i];
        }

        // if(totalSum % 2 == 1) {
        //     return false;
        // }
        // else {
        //     int target = totalSum / 2;
        //     return isPossible(nums, target, n - 1);
        // }

        int target = totalSum / 2;
        vector<vector<int>> dp(n, vector<int> (target + 1, -1));

        if(totalSum % 2 == 1) {
            return false;
        }
        else {
            return isPossibleMem(nums, target, n - 1, dp);
        }
    }
};

*/