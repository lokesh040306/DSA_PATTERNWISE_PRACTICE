/*

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        int n = nums.size();
        if (n < 3) return 0; // Early return if there are fewer than 3 numbers
        int minDiff = INT_MAX;
        int closestSum = 0;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 2; i++) {

            int j = i + 1;
            int k = n - 1;

            while (j < k) {

                int sum = nums[i] + nums[j] + nums[k];

                int diff = abs(target - sum);
                if(diff < minDiff) {
                    minDiff = diff;
                    closestSum = sum;
                }

                if(sum < target) {
                    j++;
                } 
                else if(sum > target) {
                    k--;
                }
                else {
                    return target;
                }
            }
        }

        return closestSum;
    }
};

*/