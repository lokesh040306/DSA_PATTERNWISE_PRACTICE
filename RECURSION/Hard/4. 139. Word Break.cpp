/*

class Solution {
    bool isPossible(string s, unordered_set<string> &seen, int index) {

        // Base case - if we have reached the end of the string
        if(index == s.length()) {
            return true;
        }

        // try all possible substrings starting from index
        string temp = "";

        // explore all substrings starting from index
        for(int i = index; i < s.length(); i++) {
            // build the current substring
            temp += s[i];

            // check if the current substring is in the dictionary
            if(seen.count(temp)) {
                // if it is, recursively check for the remaining substring
                if(isPossible(s, seen, i + 1)) {
                    return true;
                }
            }
        }

        return false;
    }

public:
    bool wordBreak(string s, vector<string>& wordDict) {
        // store all words in a set for O(1) lookup
        unordered_set<string> seen(wordDict.begin(), wordDict.end());
        return isPossible(s, seen, 0);
    }
};

*/