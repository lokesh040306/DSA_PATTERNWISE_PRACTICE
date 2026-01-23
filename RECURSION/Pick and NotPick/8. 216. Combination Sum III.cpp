/*

class Solution {
    void combinations(int target, int index, vector<int> &ans, int size, vector<vector<int>> &result) {

        // base case 
        if(ans.size() == size && target == 0) {
            result.push_back(ans);
        }

        // if index exceeds 9 or target becomes negative
        if(index > 9 || target < 0) return ;

        // explore all possibilities
        for(int i = index; i <= 9; i++) {
            // pick the element
            ans.push_back(i);
            combinations(target - i, i + 1, ans, size, result);
            ans.pop_back();
        }
    }
    
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        
        // RECURSION
        vector<vector<int>> result;
        vector<int> ans;
        int index = 1;
        combinations(n, index, ans, k, result);

        return result;
    }
};

*/