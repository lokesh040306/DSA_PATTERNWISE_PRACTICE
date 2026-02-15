/*

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        // Cyclic Sort

        int n = nums.size();
        int index = 0;

        while(index < n) {

            if(nums[index] > 0 && nums[index] <= n) {

                // considering range [1, n]
                int actualPos = nums[index] - 1;

                if(nums[actualPos] != nums[index]) {
                    swap(nums[actualPos], nums[index]);
                    continue;
                }
            }

            index++;
        }

        // Finding the Missing Number
        for(int i = 0; i < n; i++) {
            if(nums[i] != i + 1) {
                return i + 1;
            }
        }

        return n + 1;
    }
};

*/