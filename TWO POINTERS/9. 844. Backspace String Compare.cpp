/*

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        // TWO-POINTERS
        int len1 = s.length();
        int len2 = t.length();

        int skip1 = 0, skip2 = 0;

        int first = len1 - 1, second = len2 - 1;
        while(first >= 0 || second >= 0) {

            // finding next valid character in 's'
            while(first >= 0) {
                if(s[first] == '#') {
                    skip1++;
                    first--;
                }
                else if(skip1 > 0) {
                    skip1--;
                    first--;
                }
                else {
                    break;
                }
            }
            
            // finding next valid character in 't'
            while(second >= 0) {
                if(t[second] == '#') {
                    skip2++;
                    second--;
                }
                else if(skip2 > 0) {
                    skip2--;
                    second--;
                }
                else {
                    break;
                }
            }
            
            // We are at valid character after doing backslash -> now compare for valid character
            if(first >= 0 && second >= 0) {
                if(s[first] != t[second]) return false;
            }
            else {
                // character in any one of the string is still remaining
                if(first >= 0 || second >= 0) return false;
            }

            first--;
            second--;
        }

        return true;
    }
};

*/