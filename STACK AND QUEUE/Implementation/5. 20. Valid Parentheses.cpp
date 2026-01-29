/*

class Solution {
public:
    bool isValid(string s) {
        
        stack<char> st;

        for(char ch: s) {
            // If the opening bracket is there
            if(ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            }
            else if(ch == ')' || ch == '}' || ch == ']') {
                // If there is nothing in the stack i.e. closing bracket is the first entry in stack
                if(st.empty()){
                    return false;
                }

                // If stack is not empty
                char top = st.top();
                if((ch == ')' && top != '(') || (ch == '}' && top != '{') || (ch == ']' && top != '[')) {
                    return false;
                }

                // Backtracking
                st.pop();
            }
        }

        return st.empty();
    }
};

*/