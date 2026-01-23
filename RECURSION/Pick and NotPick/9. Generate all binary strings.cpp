/*

class Solution {
    void generate(int n, vector<string> &ans, string str) {
        
        // Base case
        if(str.length() == n) {
            ans.push_back(str);
            return ;
        }
        
        
        // push the '0' into the current string
        str.push_back('0');
        generate(n, ans, str);
        str.pop_back(); // Backtrack
        
        // push the '1' into the current string
        str.push_back('1');
        generate(n, ans, str);
        str.pop_back(); // Backtrack
    }
    
  public:
    vector<string> binstr(int n) {
        
        // RECURSION
        vector<string> ans;
        string str = "";
        
        generate(n, ans, str);
        return ans;
    }
};

*/