/*

class Solution {
    int solve(vector<int>& nums, int n, int index) {

        // Base case
        if(index >= n) return 0;

        // Choice 1: Rob this house -> add its money + skip next house
        int houseRob = nums[index] + solve(nums, n, index + 2);

        // Choice 2: Skip this house → move to next
        int houseToSkip = solve(nums, n, index + 1);

        // Return the maximum choice between the choices
        return max(houseRob, houseToSkip);
    }
    
    int solveMem(vector<int>& nums, int n, int index, vector<int> &dp) {

        // Base case
        if(index >= n) return 0;

        if(dp[index] != -1) {
            return dp[index];
        }

        // Choice 1: Rob this house -> add its money + skip next house
        int houseRob = nums[index] + solveMem(nums, n, index + 2, dp);

        // Choice 2: Skip this house → move to next
        int houseToSkip = solveMem(nums, n, index + 1, dp);

        // Return the maximum choice between the choices
        dp[index] = max(houseRob, houseToSkip);
        return dp[index];
    }

public:
    int rob(vector<int>& nums) {
        
        // Recursive 
        // int n = nums.size();
        // return solve(nums, n, 0);

        // Recursion + Memoization
        int n = nums.size();
        vector<int> dp(n + 1, -1);
        return solveMem(nums, n, 0, dp);
    }
};

*/