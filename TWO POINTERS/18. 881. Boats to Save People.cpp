/*

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        
        // Two-Pointers

        sort(people.begin(), people.end());
        int n = people.size();
        int count = 0;
        int left = 0, right = n - 1;

        while(right >= left) {
            // if weight matches the limit, both people can go
            if(people[left] + people[right] <= limit) {
                count++;
                left++;
                right--;
            }
            else {
                // if both cannot go, then only heaviest will go alone
                count++;
                right--;
            }
        }

        return count;
    }
};

*/