/*

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        
        // TWO-POINTERS

        int n = nums.size();
        if(n <= 1) return 0;

        int start = 0, end = n - 1;

        // Finding the first breaking point from the start
        while(start < n - 1 && nums[start] <= nums[start + 1]) {
            start++;
        }

        // If the array is already sorted
        if(start == n - 1) return 0;

        // Finding the first breaking point from the end
        while(end > 0 && nums[end] >= nums[end - 1]) {
            end--;
        }

        // Finding the min and max values between start and end
        int minVal = INT_MAX, maxVal = INT_MIN;
        for(int i = start; i <= end; i++) {
            minVal = min(minVal, nums[i]);
            maxVal = max(maxVal, nums[i]);
        }

        // finding the position for the min value
        while(start > 0 && nums[start - 1] > minVal) start--;

        // finding the position for the max value
        while(end < n - 1 && nums[end + 1] < maxVal) end++;

        // returning the size
        return end - start + 1;
    }
};

*/