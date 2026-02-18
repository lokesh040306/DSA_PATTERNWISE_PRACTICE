/*

class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        
        // Merge Intervals

        int len1 = firstList.size();
        int len2 = secondList.size();

        int i = 0;
        int j = 0;
        vector<vector<int>> ans;

        while(i < len1 && j < len2) {

            // Finding start and end of the 2 intervals
            int start1 = firstList[i][0];
            int end1 = firstList[i][1];
            int start2 = secondList[j][0];
            int end2 = secondList[j][1];

            // finding the start and end of the new interval
            int start = max(start1, start2);
            int end = min(end1, end2);

            // Store the valid interval
            if(start <= end) {
                ans.push_back({start, end});
            }

            // move the pointers
            if(end1 < end2) {
                i++;
            }
            else {
                j++;
            }
        }

        return ans;
    }
};

*/