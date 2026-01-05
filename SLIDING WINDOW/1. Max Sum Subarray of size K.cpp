/*

class Solution {
public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        int n = arr.size();
        int left = 0;
        int right = 0;
        int sum = 0;

        // build initial window of size k
        for(right = 0; right < k; right++) {
            sum += arr[right];
        }

        int maxSum = sum;

        // slide the window
        while(right < n) {
            sum -= arr[left];
            sum += arr[right];
            maxSum = max(maxSum, sum);
            left++;
            right++;
        }

        return maxSum;
    }
};

*/