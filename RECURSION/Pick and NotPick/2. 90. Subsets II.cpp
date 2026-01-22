/*

class Solution {
    void findSubsets(vector<int>& nums, vector<vector<int>> &ans, vector<int> curr, int index) {

        // Base case
        if(index == nums.size()) {
            ans.push_back(curr);
            return ;
        }

        // NOT PICK
        int nextIndex = index + 1;
        while(nextIndex < nums.size() && nums[nextIndex] == nums[index]) {
            nextIndex++;
        }
        findSubsets(nums, ans, curr, nextIndex);

        // PICK
        curr.push_back(nums[index]);
        findSubsets(nums, ans, curr, index + 1);
        curr.pop_back();    // BACKTRACK
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;
        vector<int> curr;

        findSubsets(nums, ans, curr, 0);
        return ans;
    }
};

*/