/*

class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        
        // Hashmap

        int n = nums.size();
        unordered_map<int, int> freq;

        // Step 1: Count frequency of each even character
        for(int i = 0; i < n; i++) {
            if(nums[i] % 2 == 0) {
                freq[nums[i]]++;
            }
        }

        int ans = -1;
        int maxFreq = 0;

        // Find the most frequent even element
        for (auto &it : freq) {
            int num = it.first;
            int count = it.second;

            if (count > maxFreq || (count == maxFreq && num < ans)) {
                maxFreq = count;
                ans = num;
            }
        }

        return ans;
    }
};

*/