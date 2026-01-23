/*

class Solution {
    void findString(int pair, string &current, int openCount, int closeCount, vector<string> &result) {
        
        // Base case
        if(current.length() == 2 * pair) {
            result.push_back(current);
            return ;
        }
        
        // pick the open parenthesis
        if(openCount < pair) {
            current.push_back('(');
            findString(pair, current, openCount + 1, closeCount, result);
            current.pop_back(); // Backtrack
        }
        
        // pick the close parenthesis
        if(closeCount < openCount) {
            current.push_back(')');
            findString(pair, current, openCount, closeCount + 1, result);
            current.pop_back(); // Backtrack
        }
    }

public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string current = "";
        int openPar = 0;
        int closePar = 0;
        findString(n, current, openPar, closePar, ans);
        return ans;
    }
};

*/