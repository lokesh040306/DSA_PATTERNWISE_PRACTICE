/*

class Solution {
    void combination(string digits, string output, int index, vector<string> &ans, string mapping[]){

        // base case 
        if(index >= digits.length()) {
            ans.push_back(output);
            return;
        }

        // find the number at the current index
        int number = digits[index] - '0';
        // finding the characters mapped by the number
        string value = mapping[number];

        for(int i = 0; i < value.length(); i++) {
            output.push_back(value[i]);
            combination(digits, output, index + 1, ans, mapping);

            // Backtracking
            output.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digits) {
        // RECURSION
        vector<string> ans;

        if(digits.length() == 0) {
            return ans;
        }
        
        string output = "";
        int index = 0;

        // mapping for the numbers to characters
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

        combination(digits, output, index, ans, mapping);
        return ans;
    }
};

*/