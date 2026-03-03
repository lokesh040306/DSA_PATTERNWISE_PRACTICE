/*

class Solution {
    int solve(vector<int> &nums, int index, int n) {

        // Base case
        if(index >= n - 1) {
            return 0;
        }

        // Try all possible jump lengths from current index
        int ans = INT_MAX;
        for(int jump = 1; jump <= nums[index]; jump++) {

            int next = solve(nums, index + jump, n);
            
            if(next != INT_MAX) {
                ans = min(ans, next + 1);
            }
        }

        return ans;
    }
    
    int solveMem(vector<int> &nums, int index, int n, vector<int> &dp) {

        // Base case
        if(index >= n - 1) {
            return 0;
        }

        if(dp[index] != -1) {
            return dp[index];
        }

        // Try all possible jump lengths from current index
        int ans = INT_MAX;
        for(int jump = 1; jump <= nums[index]; jump++) {

            int next = solveMem(nums, index + jump, n, dp);
            
            if(next != INT_MAX) {
                ans = min(ans, next + 1);
            }
        }

        return dp[index] = ans;
    }

public:
    int jump(vector<int>& nums) {
        
        // Recursion
        // int n = nums.size();
        // return solve(nums, 0, n);

        // Recursion + Memoization
        int n = nums.size();
        vector<int> dp(n, -1);
        return solveMem(nums, 0, n, dp);
    }
};

*/