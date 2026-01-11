/*

class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        
        // Sliding Window + Hashmap
        
        int n = s.size();
        int left = 0, right = 0;
        int maxLen = -1;
        unordered_map<char, int> freq;
        
        while(right < n) {
            
            // Storing the frequency of each unique element
            freq[s[right]]++;
            
            // If 'k' limit exceeds, then shrinking from left
            while(freq.size() > k) {
                freq[s[left]]--;
                // If frequency of character becomes zero then removing it completely
                if(freq[s[left]] == 0) {
                    freq.erase(s[left]);
                }
                left++;
            }
            
            // Calculating Maximum Length
            if(freq.size() == k) {
                maxLen = max(maxLen, right - left + 1);
            }
            right++;
        }
        
        return maxLen;
    }
};

*/