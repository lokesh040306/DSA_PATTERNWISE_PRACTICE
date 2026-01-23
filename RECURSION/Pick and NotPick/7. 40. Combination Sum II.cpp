/*

class Solution {
    void findCombinations(int index, int target, vector<int>& candidates, vector<int> ds, vector<vector<int>> &ans) {

        // base case
        if(target == 0) {
            ans.push_back(ds);
            return ;
        }

        // explore all possibilities
        for(int i = index; i < candidates.size(); i++) {
            // skip the duplicates 
            if(i > index && candidates[i] == candidates[i - 1]) continue;

            // if the element is greater than target, no need to explore further
            if(candidates[i] > target) break;
            
            // pick the element
            ds.push_back(candidates[i]);
            findCombinations(i + 1, target - candidates[i], candidates, ds, ans);
            ds.pop_back();  // Backtracking
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        // Must need to sort the candidates array
        sort(candidates.begin(), candidates.end());
        
        // RECURSION
        vector<vector<int>> ans;
        vector<int> ds;
        int index = 0;
        findCombinations(index, target, candidates, ds, ans);
        return ans;
    }
};

*/