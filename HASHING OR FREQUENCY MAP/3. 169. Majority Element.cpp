/*

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        // Hashmap

        int n = nums.size();
        unordered_map<int, int> freq;

        // Count frequency of each element
        for(int i = 0; i < n; i++) {
            freq[nums[i]]++;
        }

        // Find the element with frequency greater than n/2
        for(auto it: freq) {
            if(it.second > n / 2) {
                return it.first;
            }
        }
        return -1;
    }
};

*/