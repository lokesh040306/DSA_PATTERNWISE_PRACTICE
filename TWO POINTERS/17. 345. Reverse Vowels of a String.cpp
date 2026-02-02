/*

class Solution {

    // Helper function to check if a character is a vowel
    bool isVowel(char ch) {
        string str = "aeiouAEIOU";
        return str.find(ch) != string::npos;
    }

public:
    string reverseVowels(string s) {
        
        // Two Pointers

        int n = s.length();
        int left = 0, right = n - 1;

        while(left < right) {

            // Move left pointer to the next vowel
            while(left < right && !isVowel(s[left])) {
                left++;
            }

            // Move right pointer to the previous vowel
            while(left < right && !isVowel(s[right])) {
                right--;
            }

            // Swap the vowels
            if(left < right) {
                swap(s[left], s[right]);
                left++;
                right--;
            }
            else break;
        }

        return s;
    }
};

*/