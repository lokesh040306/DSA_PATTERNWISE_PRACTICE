/*

class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        // Cyclic Sort
        
        int n = nums.size();
        int index = 0;

        while(index < n) {

            // Step 1: Finding the actual position of the element/number
            int actualPos = nums[index] - 1;

            // Step 2: Only swap if the value is in bounds and not in the correct place
            if(nums[index] != nums[actualPos]) {
                swap(nums[index], nums[actualPos]);
            }
            else {
                index++;
            }
        }

        // Finding the Duplicate Number
        for(int i = 0; i < n; i++) {
            if(nums[i] != i + 1) {
                return nums[i];
            }
        }

        return -1;
    }
};

*/