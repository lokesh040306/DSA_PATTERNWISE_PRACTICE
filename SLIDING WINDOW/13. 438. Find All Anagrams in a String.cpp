/*

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        // Sliding Window 

        int len1 = p.length();
        int len2 = s.length();
        int left = 0, right = 0;
        unordered_map<char, int> freq1, freq2;

        vector<int> ans;

        if(len1 > len2) return ans;

        // Storing the complete occurrances of 's1' and forming the first window in 's2'
        while(right < len1) {
            freq1[p[right]]++;
            freq2[s[right]]++;
            right++;
        }

        // Checking for the first window
        if(freq1 == freq2) {
            ans.push_back(left);
        }

        // Sliding the window and checking for Permutations
        while(right < len2) {
            freq2[s[right]]++;
            freq2[s[left]]--;

            // If the frequency of the character becomes 0 then remove it
            if(freq2[s[left]] == 0) {
                freq2.erase(s[left]);
            }
            left++;
            right++;

            if(freq1 == freq2) {
                ans.push_back(left);
            } 
        }
        return ans;
    }
};

*/