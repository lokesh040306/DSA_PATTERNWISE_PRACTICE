/*

class Solution {
    int findCount(int target) {

        // Base case
        if(target == 0) {
            return 0;
        }

        int ans = INT_MAX;
        for(int i = 1; i * i <= target; i++) {
            int square = 1 + findCount(target - i*i);
            ans = min(ans, square);
        }

        return ans;
    }
    
    int findCountMem(int target, vector<int> &dp) {

        // Base case
        if(target == 0) {
            return 0;
        }

        if(dp[target] != -1) {
            return dp[target];
        }

        int ans = INT_MAX;
        for(int i = 1; i * i <= target; i++) {
            int square = 1 + findCountMem(target - i*i, dp);
            ans = min(ans, square);
        }

        return dp[target] = ans;
    }

public:
    int numSquares(int n) {
        
        // Recursion
        // return findCount(n);
        
        // Recursion + Memoization
        vector<int> dp(n + 1, -1);
        return findCountMem(n, dp);
    }
};

*/