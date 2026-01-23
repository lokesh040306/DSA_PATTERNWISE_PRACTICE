/*

class Solution {
    void findCombinations(int index, int target, vector<int>& candidates, vector<int> ds, vector<vector<int>> &ans) {

        // base case 
        if(index == candidates.size()) {
            if(target == 0) {
                ans.push_back(ds);
            }
            return ;
        }

        // Not picking up the element
        findCombinations(index + 1, target, candidates, ds, ans);

        // Pick up the element
        if(candidates[index] <= target) {
            // Choose the element
            ds.push_back(candidates[index]);
            findCombinations(index, target - candidates[index], candidates, ds, ans);
            // Backtrack
            ds.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        // RECURSION
        vector<vector<int>> ans;
        vector<int> ds;
        int index = 0;
        findCombinations(index, target, candidates, ds, ans);
        return ans;
    }
};

*/