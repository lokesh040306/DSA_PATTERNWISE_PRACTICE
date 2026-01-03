/*

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        vector<vector<int>> ans;
        int n = nums.size();
        if (n < 4) return ans; // Early return if there are fewer than 3 numbers

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 3; i++) {
            // Skip duplicates for the first pointer
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            for(int j = i + 1; j < n - 2; j++) {
                // Skip duplicates for the second pointer
                if (j > (i + 1) && nums[j] == nums[j - 1]) continue;

                int k = j + 1;
                int l = n - 1;

                while (k < l) {

                    long long sum = nums[i];
                    sum += nums[j];
                    sum += nums[k]; 
                    sum += nums[l];

                    if(sum < target) {
                        k++;
                    } 
                    else if(sum > target) {
                        l--;
                    }
                    else {
                        ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                        k++;
                        l--;
                        // Skip duplicates for the third pointer
                        while (k < l && nums[k] == nums[k - 1]) k++;
                        // Skip duplicates for the fourth pointer
                        while (k < l && nums[l] == nums[l + 1]) l--;
                    }
                }
            }
        }

        return ans;
    }
};

*/