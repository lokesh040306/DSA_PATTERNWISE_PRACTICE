/*

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        // Cyclic Sort

        int n = arr.size();
        int index = 0;

        while(index < n) {
            
            int missing = arr[index] - (index + 1);
            if(missing >= k) {
                return k + index;
            }

            index++;
        }

        return k + index;
    }
};

*/