/*

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        // Binary Search

        int n = arr.size();

        // If kth missing number is less than the first element
        if(k < arr[0]) return k;

        int start = 0, end = n - 1;

        while(start <= end) {

            int mid = start + (end - start) / 2;

            // Number of missing numbers till arr[mid]
            int missing = arr[mid] - (mid + 1);

            // Adjust search space based on missing count
            if(missing < k) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return k + end + 1;
    }
};

*/