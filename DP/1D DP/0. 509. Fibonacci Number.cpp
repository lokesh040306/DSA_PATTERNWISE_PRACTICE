/*

class Solution {
    int fibMem(int n, vector<int> &dp) {

        // Base case
        if(n <= 1) {
            return n;
        }

        if(dp[n] != -1) {
            return dp[n];
        }

        return dp[n] = fibMem(n - 1, dp) + fibMem(n - 2, dp);
    }

public:
    int fib(int n) {
        
        // Recursion

        // Base case
        // if(n <= 1) {
        //     return n;
        // }

        // return fib(n - 1) + fib(n - 2);


        // Recursion + Memoization
        vector<int> dp(n + 1, -1);
        return fibMem(n, dp);
    }
};

*/