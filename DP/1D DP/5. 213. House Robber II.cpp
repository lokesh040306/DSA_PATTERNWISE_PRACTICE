/*

class Solution {
    int solve(vector<int>& nums, int index, int n) {

        // Base case
        if(index >= n) return 0;

        int robHouse = nums[index] + solve(nums, index + 2, n);

        int houseToSkip = 0 + solve(nums, index + 1, n);

        return max(robHouse, houseToSkip);
    }
    
    int solveMem(vector<int>& nums, int index, int n, vector<int> &dp) {

        // Base case
        if(index >= n) return 0;

        if(dp[index] != -1) {
            return dp[index];
        }

        int robHouse = nums[index] + solveMem(nums, index + 2, n, dp);

        int houseToSkip = 0 + solveMem(nums, index + 1, n, dp);

        return dp[index] = max(robHouse, houseToSkip);
    }

public:
    int rob(vector<int>& nums) {
        
        // Recursion 
        // int n = nums.size();
        // return max(solve(nums, 0, n - 1), solve(nums, 1, n));

        // Recursion + Memoization
        int n = nums.size();
        if(n == 1) return nums[0];
        vector<int> dp1(n + 1, -1), dp2(n + 1, -1);
        return max(solveMem(nums, 0, n - 1, dp1), solveMem(nums, 1, n, dp2));
    }
};

*/