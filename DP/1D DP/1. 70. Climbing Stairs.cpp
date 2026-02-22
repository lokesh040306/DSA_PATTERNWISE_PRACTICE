/*

class Solution {
    int climbStairsMem(vector<int> &dp, int n) {

        // Base case
        if(n == 0) return 1;
        if(n == 1) return 1;

        if(dp[n] != -1) {
            return dp[n];
        }

        dp[n] = climbStairsMem(dp, n - 1) + climbStairsMem(dp, n - 2);

        return dp[n];
    }

public:
    int climbStairs(int n) {
        
        // if(n == 0) return 1;
        // if(n == 1) return 1;
        // return climbStairs(n - 1) + climbStairs(n - 2);

        // Recursion + Memoization
        vector<int> dp(n + 1, -1);
        return climbStairsMem(dp, n);
    }
};

*/