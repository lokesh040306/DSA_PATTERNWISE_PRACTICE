/*

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        // Prefix Sum

        int n = nums.size();

        vector<int> prefix(n, 1);
        // Storing prefix product before index 'i'
        for(int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] * nums[i - 1];
        }

        // find sufix product of element after index 'i'
        int sufix = 1;
        for(int i = n - 1; i >= 0; i--) {
            // Storing into the prefix array to save the extra space
            prefix[i] = prefix[i] * sufix;
            sufix *= nums[i];
        }

        return prefix;
    }
};

*/