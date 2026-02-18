/*

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
        // Merge Intervals

        vector<vector<int>> ans;
        int index = 0;
        int n = intervals.size();

        // 1. Add all intervals that come before newInterval
        while (index < n && intervals[index][1] < newInterval[0]) {
            ans.push_back(intervals[index]);
            index++;
        }

        // 2. Merge overlapping intervals with newInterval
        while (index < n && intervals[index][0] <= newInterval[1]) {
            newInterval[0] = min(newInterval[0], intervals[index][0]);
            newInterval[1] = max(newInterval[1], intervals[index][1]);
            index++;
        }
        ans.push_back(newInterval);  // add the merged newInterval

        // 3. Add the remaining intervals
        while (index < n) {
            ans.push_back(intervals[index]);
            index++;
        }

        return ans;
    }
};

*/