/*

class Solution {
    private:
    int lcs(string text1, int index1, string text2, int index2) {

        // Base case
        if(index1 < 0 || index2 < 0) {
            return 0;
        }

        // If the current character is matched
        if(text1[index1] == text2[index2]) {
            return 1 + lcs(text1, index1 - 1, text2, index2 - 1);
        }

        // If not matched -> reduce both indices on by one and find maximum between them
        return 0 + max(lcs(text1, index1 - 1, text2, index2), lcs(text1, index1, text2, index2 - 1));
    }

    int lcsMem(string &text1, int index1, string &text2, int index2, vector<vector<int>> &dp) {

        // Base case
        if(index1 < 0 || index2 < 0) {
            return 0;
        }

        if(dp[index1][index2] != -1) {
            return dp[index1][index2];
        }

        // If the current character is matched
        if(text1[index1] == text2[index2]) {
            dp[index1][index2] = 1 + lcsMem(text1, index1 - 1, text2, index2 - 1, dp);
            return dp[index1][index2];
        }

        // If not matched -> reduce both indices on by one and find maximum between them
        dp[index1][index2] = max(lcsMem(text1, index1 - 1, text2, index2, dp), lcsMem(text1, index1, text2, index2 - 1, dp));

        return dp[index1][index2];
    }

public:
    int longestCommonSubsequence(string text1, string text2) {
        
        // Recursion
        // int len1 = text1.length();
        // int len2 = text2.length();
        // return lcs(text1, len1 - 1, text2, len2 - 1);

        // Recursion + Memoization
        int len1 = text1.length();
        int len2 = text2.length();
        vector<vector<int>> dp(len1, vector<int>(len2, -1));
        return lcsMem(text1, len1 - 1, text2, len2 - 1, dp);
    }
};

*/