/*

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        // Sliding Window 

        int len1 = s1.length();
        int len2 = s2.length();
        int left = 0, right = 0;
        unordered_map<char, int> freq1, freq2;

        if(len1 > len2) return false;

        // Storing the complete occurrances of 's1' and forming the first window in 's2'
        while(right < len1) {
            freq1[s1[right]]++;
            freq2[s2[right]]++;
            right++;
        }

        // Checking for the first window
        if(freq1 == freq2) return true;

        // Sliding the window and checking for Permutations
        while(right < len2) {
            freq2[s2[right]]++;
            freq2[s2[left]]--;

            // If the frequency of the character becomes 0 then remove it
            if(freq2[s2[left]] == 0) {
                freq2.erase(s2[left]);
            }

            if(freq1 == freq2) return true;

            left++;
            right++;
        }
        return false;
    }
};

*/