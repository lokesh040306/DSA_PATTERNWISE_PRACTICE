/*

class Solution {
    int findCounts(vector<int> &arr, int target, int index) {
        
        // Base case
        if(index == 0) {
            if(target == 0 && arr[0] == 0) return 2;
            if(target == 0 || arr[0] == target) return 1;
            return 0;
        }
        
        int notPick = findCounts(arr, target, index - 1);
        
        int pick = 0;
        if(target - arr[index] >= 0) {
            pick = findCounts(arr, target - arr[index], index - 1);
        }
        
        return pick + notPick;
    }
    
    int findCountsMem(vector<int> &arr, int target, int index, vector<vector<int>> &dp) {
        
        // Base case
        if(index == 0) {
            if(target == 0 && arr[0] == 0) return 2;
            if(target == 0 || arr[0] == target) return 1;
            return 0;
        }
        
        if(dp[index][target] != -1) {
            return dp[index][target];
        }
        
        int notPick = findCountsMem(arr, target, index - 1, dp);
        
        int pick = 0;
        if(target - arr[index] >= 0) {
            pick = findCountsMem(arr, target - arr[index], index - 1, dp);
        }
        
        return dp[index][target] = pick + notPick;
    }
    
  public:
    int perfectSum(vector<int>& arr, int target) {
        
        // Recursion
        // int n = arr.size();
        // return findCounts(arr, target, n - 1);
        
        // Recursion + Memozation
        int n = arr.size();
        vector<vector<int>> dp(n, vector<int> (target + 1, -1));
        return findCountsMem(arr, target, n - 1, dp);
    }
};

*/