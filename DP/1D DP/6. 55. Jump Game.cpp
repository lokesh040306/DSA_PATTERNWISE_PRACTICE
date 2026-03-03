/*

class Solution {
    int solve(vector<int> &nums, int index, int n) {

        // Base case
        if(index >= n - 1) {
            return true;
        }

        // Try all possible jump lengths from current index
        bool check = false;
        for(int jump = 1; jump <= nums[index]; jump++) {

            check = solve(nums, index + jump, n);

            // If any jump works, store and return true
            if(check) {
                return true;
            }
        }

        return false;
    }
    
    int solveMem(vector<int> &nums, int index, int n, vector<int> &dp) {

        // Base case
        if(index >= n - 1) {
            return true;
        }

        if(dp[index] != -1) {
            return dp[index];
        }

        // Try all possible jump lengths from current index
        bool check = false;
        for(int jump = 1; jump <= nums[index]; jump++) {

            check = solveMem(nums, index + jump, n, dp);

            // If any jump works, store and return true
            if(check) {
                return dp[index] = true;
            }
        }

        return dp[index] = false;
    }

public:
    bool canJump(vector<int>& nums) {
        
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