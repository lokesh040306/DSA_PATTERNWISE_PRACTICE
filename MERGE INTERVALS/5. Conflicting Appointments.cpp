/*

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(), intervals.end());

        int n = intervals.size();
        int count = 0;
        vector<int> prev = intervals[0];

        for(int i = 1; i < n; i++) {
            if(intervals[i][0] < prev[1]) {
                count++;
                prev[1] = min(prev[1], intervals[i][1]);
            }
            else {
                prev = intervals[i];
            }
        }
        return count;
    }
};

*/