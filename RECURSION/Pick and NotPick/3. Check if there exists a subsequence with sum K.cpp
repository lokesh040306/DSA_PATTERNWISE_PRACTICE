/*

class Solution {
    bool isPossible(vector<int> &arr, int target, int index) {

        // Base case
        if(target == 0) return true;
    
        // If only one element is left to consider
        if(index == 0) return target == arr[0];
    
        // skip the current element
        bool notPick = isPossible(arr, target, index - 1);
    
        // pick the current element
        bool pick = false;
        if(target >= arr[index]) {
            pick = isPossible(arr, target - arr[index], index - 1);
        }
    
        return notPick || pick;
    }
    
  public:
    bool checkSubsequenceSum(int n, vector<int>& arr, int k) {
        
        // RECURSION
        
        return isPossible(arr, k, n - 1);
    }
};

*/