/*

int solveMem(int ind, vector<int>& height, vector<int>& dp, int k) {

    // Base case
    if (ind == 0) return 0;

    if (dp[ind] != -1) return dp[ind];

    int mmSteps = INT_MAX;

    // Try all possible jumps from 1 to k
    for (int j = 1; j <= k; j++) {

        // Ensure jump does not go out of bounds
        if (ind - j >= 0) {

            // Cost of taking the jump
            int jump = solveMem(ind - j, height, dp, k) + abs(height[ind] - height[ind - j]);
            // Store the minimum cost
            mmSteps = min(jump, mmSteps);
        }
    }

    // Save the result in dp array
    return dp[ind] = mmSteps;
}

solveRec(int n, vector<int> &dp, int k) {

    // Base case
    if(n == 0) return 0;

    int mmSteps = INT_MAX;

    for(int i = 0; i <= k; i++) {
        if(n - i >= 0) {
            int jump = solveRec(n - i, height, k) + abs(height[n] - height[n - i]);
            mmSteps = min(jump, mmSteps);
        }
    }

    return mmSteps;
}

int solve(int n, vector<int>& height, int k) {

    // Recursion
    
    return solveRec(n - 1, height, k);
    

    // Recursion + Memoization

    vector<int> dp(n, -1);
    return solveMem(n - 1, height, dp, k);
}

*/