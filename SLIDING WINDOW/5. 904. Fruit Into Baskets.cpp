/*

class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        // Sliding Window + Hashmap
        
        int n = fruits.size();
        int left = 0, right = 0;
        int maxFruits = 0;
        unordered_map<int, int> freq;
        
        while(right < n) {
            
            // Storing the frequency of each unique element
            freq[fruits[right]]++;
            
            // If 'k' limit exceeds, then shrinking from left
            while(freq.size() > 2) {
                freq[fruits[left]]--;
                // If frequency of number becomes zero then removing it completely
                if(freq[fruits[left]] == 0) {
                    freq.erase(fruits[left]);
                }
                left++;
            }
            
            // Calculating Maximum fruits count
            if(freq.size() <= 2) {
                maxFruits = max(maxFruits, right - left + 1);
            }

            right++;
        }
        
        return maxFruits == 0 ? 1 : maxFruits;
    }
};

*/