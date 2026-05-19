/*

class Solution {
    int solve(vector<int> &nums, int target) {

        // Base case
        if(target == 0) {
            return 1;
        }

        int ways = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] <= target) {
                ways += solve(nums, target - nums[i]);
            }
        }

        return ways;
    }
    
    int solveMem(vector<int> &nums, int target, vector<int> &dp) {

        // Base case
        if(target == 0) {
            return 1;
        }

        if(dp[target] != -1) {
            return dp[target];
        }

        int ways = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] <= target) {
                ways += solveMem(nums, target - nums[i], dp);
            }
        }

        return dp[target] = ways;
    }

public:
    int combinationSum4(vector<int>& nums, int target) {
        
        // Recursion
        // return solve(nums, target);
        
        // Recursion + Memoization
        vector<int> dp(target + 1, -1);
        return solveMem(nums, target, dp);
    }
};

*/