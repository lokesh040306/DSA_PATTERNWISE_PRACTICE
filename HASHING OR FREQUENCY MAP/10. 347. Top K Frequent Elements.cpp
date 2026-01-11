/*

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        // Hashmap

        unordered_map<int, int> mpp;

        for(int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
        }

        // Storing the map elements in a vector of pairs
        vector<pair<int,int>> v;
        for(auto it : mpp) {
            v.push_back(it);
        }

        // Sorting the vector on the basis of frequency
        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });

        // Storing the top k frequent elements in the answer vector
        vector<int> ans;
        for(int i = 0; i < k; i++) {
            ans.push_back(v[i].first);
        }

        return ans;
    }
};

*/