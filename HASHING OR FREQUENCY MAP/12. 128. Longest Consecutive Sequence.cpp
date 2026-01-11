/*

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> st(nums.begin(), nums.end());

        int maxCnt = 0;

        for(int num : st) {
            // When the predecessor is not exists
            if(!st.count(num - 1)) {
                int currNum = num;
                int cnt = 1;

                // expand the size until valid
                while(st.count(currNum + 1)) {
                    cnt++;
                    currNum++;
                }

                maxCnt = max(maxCnt, cnt);
            }
        }

        return maxCnt;
    }
};

*/