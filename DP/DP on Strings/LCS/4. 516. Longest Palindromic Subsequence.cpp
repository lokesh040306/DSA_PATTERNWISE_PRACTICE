/*

class Solution {
    int lcs(string &s1, int index1, string &s2, int index2) {

        // Base case
        if(index1 < 0 || index2 < 0) {
            return 0;
        }

        if(s1[index1] == s2[index2]) {
            return 1 + lcs(s1, index1 - 1, s2, index2 - 1);
        }

        return max(lcs(s1, index1 - 1, s2, index2), lcs(s1, index1, s2, index2 - 1));
    }
    
    int lcsMem(string &s1, int index1, string &s2, int index2, vector<vector<int>> &dp) {

        // Base case
        if(index1 < 0 || index2 < 0) {
            return 0;
        }

        if(dp[index1][index2] != -1) {
            return dp[index1][index2];
        }

        if(s1[index1] == s2[index2]) {
            return 1 + lcsMem(s1, index1 - 1, s2, index2 - 1, dp);
        }

        return dp[index1][index2] = max(lcsMem(s1, index1 - 1, s2, index2, dp), lcsMem(s1, index1, s2, index2 - 1, dp));
    }

public:
    int longestPalindromeSubseq(string s) {
        
        string temp = s;
        reverse(temp.begin(), temp.end());
        int len = s.length();

        // Recursion
        // return lcs(s, len - 1, temp, len - 1);

        // Recursion + Memoization
        vector<vector<int>> dp(len, vector<int> (len, -1));
        return lcsMem(s, len - 1, temp, len - 1, dp);
    }
};

*/