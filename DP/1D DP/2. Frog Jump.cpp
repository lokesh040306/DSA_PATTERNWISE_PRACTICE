/*

class Solution {
    int findCost(vector<int>& height, int n) {
        
        // Base case -> If it is on first stair
        if(n == 0) {
            return 0;
        }
        
        int firstJump = findCost(height, n - 1) + abs(height[n] - height[n - 1]);
        
        int secondJump = INT_MAX;
        if(n > 1) {
            secondJump = findCost(height, n - 2) + abs(height[n] - height[n - 2]);
        }
        
        return min(firstJump, secondJump);
    }
    
    int findCostMem(vector<int>& height, int n, vector<int> &dp) {
        
        // Base case -> If it is on first stair
        if(n == 0) {
            return 0;
        }
        
        if(dp[n] != -1) {
            return dp[n];
        }
        
        int firstJump = findCostMem(height, n - 1, dp) + abs(height[n] - height[n - 1]);
        
        int secondJump = INT_MAX;
        if(n > 1) {
            secondJump = findCostMem(height, n - 2, dp) + abs(height[n] - height[n - 2]);
        }
        
        return dp[n] = min(firstJump, secondJump);
    }
    
  public:
    int minCost(vector<int>& height) {
        
        // Recursion
        // int n = height.size();
        // return findCost(height, n - 1);
        
        
        // Recursion + Memoization
        int n = height.size();
        vector<int> dp(n + 1, -1);
        return findCostMem(height, n - 1, dp);
    }
};

*/