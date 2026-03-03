/*

#include<bits/stdc++.h>

int solve(int w, vector<int> &profit, vector<int> &weight, int index) {
    
    // Base case
    if(index == 0) {
        // If we are still remaining with the bag limit
        return (w / weight[0]) * profit[0]; 
    }
    
    int notPick = 0 + solve(w, profit, weight, index - 1);
    
    int pick = INT_MIN;
    if(weight[index] <= w) {
        pick = profit[index] + solve(w - weight[index], profit, weight, index);
    }
    
    return max(notPick, pick);
}

int solveMem(int w, vector<int> &profit, vector<int> &weight, int index, vector<vector<int>> &dp) {
        
    // Base case
    if(index == 0) {
        // If we are still remaining with the bag limit
        return (w / weight[0]) * profit[0]; 
    }

    if(dp[index][w] != -1) {
        return dp[index][w];
    }
    
    int notPick = 0 + solveMem(w, profit, weight, index - 1, dp);
    
    int pick = INT_MIN;
    if(weight[index] <= w) {
        pick = profit[index] + solveMem(w - weight[index], profit, weight, index, dp);
    }
    
    dp[index][w] = max(notPick, pick);

    return dp[index][w];
}

int unboundedKnapsack(int n, int w, vector<int> &profit, vector<int> &weight){
    
    // Recursion
    // return solve(w, profit, weight, n - 1);

    // Recursion + Memoization
    vector<vector<int>> dp(n, vector<int> (w + 1, -1));
    return solveMem(w, profit, weight, n - 1, dp);
}

*/