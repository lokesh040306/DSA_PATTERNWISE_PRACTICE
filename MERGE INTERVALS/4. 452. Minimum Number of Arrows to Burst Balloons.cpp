/*

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        
        // Merge Intervals

        sort(points.begin(), points.end());
        int n = points.size();

        int prev = points[0][1];
        int count = 1;

        for(int i = 1; i < n; i++) {
            if(points[i][0] <= prev) {
                prev = min(prev, points[i][1]);
            }
            else {
                count++;
                prev = points[i][1];
            }
        }

        return count;
    }
};

*/