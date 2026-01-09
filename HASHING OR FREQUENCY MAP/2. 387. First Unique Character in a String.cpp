/*

class Solution {
public:
    int firstUniqChar(string s) {
        
        // Hashmap

        int n = s.length();
        unordered_map<char, int> freq;

        // Step 1: Count frequency of each character
        for(char ch: s) {
            freq[ch]++;
        }

        // Step 2: Find first character with frequency 1
        for(int i = 0; i < n; i++) {
            if(freq[s[i]] == 1) {
                return i;
            }
        }

        return -1; // No unique character found
    }
};

*/