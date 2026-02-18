/*

class Solution {
  public:
    bool canAttend(vector<vector<int>> &arr) {
        
        // Merge Intervals
        
        int n = arr.size();
        sort(arr.begin(), arr.end());
        
        int prev = arr[0][1];
        
        for(int i = 1; i < n; i++) {
            
            if(arr[i][0] < prev) return false;
            
            prev = arr[i][1];
        }
        
        return true;
    }
};

*/