/*

class Solution {
public:
    int characterReplacement(string s, int k) {
        
        // Sliding Window

        int n = s.length();
        int left = 0, right = 0;
        int maxLen = 0, maxFreq = 0;

        // Store the frequency
        int hash[26] = {0};

        while(right < n) {

            // Add new element in hash table
            hash[s[right] - 'A']++;
            // calculate the maximum freq element btn left and right
            maxFreq = max(maxFreq, hash[s[right] - 'A']);

            // we already got max window, so moving only by one
            if((right - left + 1) - maxFreq > k) {
                hash[s[left] - 'A']--;
                maxFreq = 0;
                left++;
            }

            // Find the maximum length
            if((right - left + 1) - maxFreq <= k) {
                maxLen = max(maxLen, right - left + 1);
            }
            right++;
        }
        return maxLen;
    }
};

*/