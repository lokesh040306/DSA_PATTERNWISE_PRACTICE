/*

class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        // Sliding Window + Hashmap
        
        int n = s.length();
        int left = 0, right = 0;
        int maxLen = 0;
        unordered_set<char> seen;

        while(right < n) {

            // If the same element occurs twice, shrinking the window from left
            while(seen.count(s[right])) {
                seen.erase(s[left]);
                left++;
            }

            // Inserting new element into the set
            seen.insert(s[right]);

            // Finding valid maximum length
            maxLen = max(maxLen, right - left + 1);
            right++;
        }
        return maxLen;
    }
};

*/