/*

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        // Cyclic Sort

        int n = nums.size();
        int index = 0;

        while(index < n) {
            // Step 1: Finding the actual position of the element/number
            int actualPos = nums[index];

            // Step 2: Only swap if the value is in bounds and not in the correct place
            if(actualPos < n && nums[index] != nums[actualPos]) {
                swap(nums[index], nums[actualPos]);
            }
            else {
                index++;
            }
        }
        
        // Finding the Missing Number
        for(int i = 0; i < n; i++) {
            if(nums[i] != i) return i;
        }

        return n;
    }
};

*/