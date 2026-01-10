/*

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        // Hashmap

        // Storing the elements of first array in a set
        unordered_set<int> seen(nums1.begin(), nums1.end());

        // Storing the intersection elements in a set to avoid duplicates
        unordered_set<int> ans;

        vector<int> result;

        // Checking for each element of second array if it is present in the set
        for(int i = 0; i < nums2.size(); i++) {
            int num = nums2[i];
            if(seen.count(num)) {
                ans.insert(num);
            }
        }

        // Convert set to vector using for loop
        for(auto it : ans) {
            result.push_back(it);
        }

        return result;
    }
};

*/