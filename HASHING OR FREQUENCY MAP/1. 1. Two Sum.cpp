/*

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        // Hashmap

        int n = nums.size();
        unordered_map<int, int> mpp;
        vector<int> ans;

        // Traverse through the array
        for(int i = 0; i < n; i++) {
            int num = nums[i];
            if(mpp.find(target - num) != mpp.end()) {
                ans.push_back(mpp[target - num]);
                ans.push_back(i);
                return ans;
            }
            mpp[num] = i;   // store current after checking
        }
        
        return ans;
    }
};

*/