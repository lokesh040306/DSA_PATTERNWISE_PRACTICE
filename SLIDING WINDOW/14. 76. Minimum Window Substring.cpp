/*

class Solution {
public:
    string minWindow(string s, string t) {
        
        // Sliding Window

        int len1 = s.length();
        int len2 = t.length();

        if(len2 > len1) return "";

        unordered_map<char, int> freq1, freq2;

        for(int i = 0; i < len2; i++) {
            freq2[t[i]]++;
        }

        // Number of distinct characters we need to match
        int required = freq2.size();
        // Number of characters that currently satisfy required frequency
        int formed = 0;

        int left = 0, right = 0;
        int minLen = INT_MAX;
        int startIdx = 0;

        while(right < len1) {

            // add current character to window 
            char ch1 = s[right];
            freq1[ch1]++;

            // If this character is required and its frequency just matched
            if(freq2.count(ch1) && freq1[ch1] == freq2[ch1]) {
                formed++;
            }

            // Try to shrink the window while it remains valid
            while(formed == required) {

                int currLen = right - left + 1;
                if(currLen < minLen) {
                    minLen = currLen;
                    startIdx = left;
                }

                char ch2 = s[left];
                freq1[ch2]--;

                if(freq2.count(ch2) && freq1[ch2] < freq2[ch2]) {
                    formed--;
                }

                left++;
            }

            right++;
        }

        return (minLen == INT_MAX) ? "" : s.substr(startIdx, minLen);
    }
};

*/