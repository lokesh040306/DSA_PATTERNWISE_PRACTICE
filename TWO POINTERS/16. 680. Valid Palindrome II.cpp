/*

class Solution {
    bool isPalindrome(string &s, int left, int right) {
 
        // Check if the given string is Palindrome
        while(left < right) {
            if(s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }

public:
    bool validPalindrome(string s) {

        // TWO-POINTERS

        int n = s.length();
        if(n == 1) return true;
        
        int left = 0, right = n - 1;

        while(left < right) {

            // first position where we found mismatch
            if(s[left] != s[right]) break;

            left++;
            right--;
        }

        // there are 2 choices at mismatch
        bool choice1 = isPalindrome(s, left + 1, right);
        bool choice2 = isPalindrome(s, left, right - 1);

        return choice1 || choice2;
    }
};

*/