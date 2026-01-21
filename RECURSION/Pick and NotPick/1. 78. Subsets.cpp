/*

class Solution {
    void findSubsets(vector<int>& nums, vector<vector<int>>& ans, vector<int> curr, int index) {

        // BASE CASE 
        if (index == nums.size()) {
            ans.push_back(curr);
            return;
        }

        // NOT PICK - do not include the element at index
        findSubsets(nums, ans, curr, index + 1);

        // PICK - include the element at index
        curr.push_back(nums[index]);
        findSubsets(nums, ans, curr, index + 1);
        curr.pop_back(); // BACKTRACK
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        // forming empty array for including the curr array
        vector<vector<int>> ans;

        // Array for storing included elements
        vector<int> curr;

        // Calling the recursive function
        findSubsets(nums, ans, curr, 0);
        return ans;
    }
};

*/