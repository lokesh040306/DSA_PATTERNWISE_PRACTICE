/*

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        // Cyclic Sort

        int n = nums.size();
        int index = 0;
        vector<int> ans;

        while(index < n) {

            int actualPos = nums[index] - 1;

            if(nums[index] != nums[actualPos]) {
                swap(nums[index], nums[actualPos]);
            }
            else {
                index++;
            }
        }

        for(int i = 0; i < n; i++) {
            if(nums[i] != i + 1) {
                ans.push_back(nums[i]);     // Repeating Number
                ans.push_back(i + 1);       // Lost Number
            }
        }

        return ans;
    }
};

*/