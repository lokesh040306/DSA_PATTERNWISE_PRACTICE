/*

class Solution {
    void reverse(vector<char>& s, int i, int j){

        // Base case
        if(i > j){
            return ;
        }
        
        // Processing
        swap(s[i], s[j]);
        i++;
        j--;
        
        // Recursive Relation
        reverse(s, i, j);
    }

public:
    void reverseString(vector<char>& s) {
        
        int start = 0;
        int end = s.size() - 1;

        reverse(s, start, end);
    }
};

*/