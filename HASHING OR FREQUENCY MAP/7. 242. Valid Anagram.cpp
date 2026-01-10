/*

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        // if the string has different lengths
        if(s.size() != t.size()){
            return false;
        }

        vector<int> freq(26,0);

        // storing the frequency of each element in the string
        for(int i = 0; i < s.size(); i++){
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        // checking if there is anagram or not
        for(int i = 0; i < 26; i++){
            if(freq[i] != 0){
                return false;
            }
        }
        return true;
    }
};

*/