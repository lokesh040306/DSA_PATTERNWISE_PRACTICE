/*

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        // Merge Intervals

        int n = intervals.size();

        // Step 1: Sort intervals based on the start time
        sort(intervals.begin(), intervals.end());

        // Step 2: Create result vector to store merged intervals
        vector<vector<int>> ans;

        // Step 3: Go through each interval
        for(int i = 0; i < n; i++) {

            // If ans is empty or current interval doesn't overlap with last one
            if(ans.empty() || intervals[i][0] > ans.back()[1]) {
                ans.push_back(intervals[i]);
            }
            else {
                // Overlap case: update the end of the last interval in ans
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            }
        }

        return ans;
    }
};

*/