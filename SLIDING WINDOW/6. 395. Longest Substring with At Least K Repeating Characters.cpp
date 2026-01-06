/*

class Solution {
public:
    int longestSubstring(string s, int k) {
        
        // Sliding Window

        int n = s.length();
        int maxLen = 0;

        for(int distinctTarget = 0; distinctTarget <= 26; distinctTarget++) {

            int left = 0, right = 0;
            int distinctCnt = 0;
            int atLeastKCnt = 0;
            vector<int> freq(26, 0);

            while(right < n) {

                // Add the character at right
                int temp1 = s[right] - 'a';
                // check for distict element
                if(freq[temp1] == 0) distinctCnt++;
                freq[temp1]++;
                // check if the frequency is equals 'k'
                if(freq[temp1] == k) atLeastKCnt++;

                // Shrinking the window if distincts exceeds the target
                while(distinctCnt > distinctTarget) {
                    int temp2 = s[left] - 'a';
                    // if the frequency is reduced than 'k'
                    if(freq[temp2] == k) atLeastKCnt--;
                    freq[temp2]--;
                    // if the frequency becomes zero
                    if(freq[temp2] == 0) distinctCnt--;
                    left++;
                }

                // finding length of valid window
                if(distinctCnt == distinctTarget && atLeastKCnt == distinctTarget) {
                    maxLen = max(maxLen, right - left + 1);
                }

                right++;
            }
        }

        return maxLen;
    }
};

*/