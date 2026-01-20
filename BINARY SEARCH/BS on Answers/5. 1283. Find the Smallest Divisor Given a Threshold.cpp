/*

class Solution {
    int findMax(vector<int> &v) {
        int n = v.size(), maxi = INT_MIN;
        for(int i = 0; i < n; i++) {
            maxi = max(maxi, v[i]);
        }
        return maxi;
    }

    int sumByDivisor(vector<int> &v, int divi){
        int n = v.size();
        int sum = 0;
        for(int i = 0; i < n; i++) {
            // calculate sum of ceil of each element divided by divi
            sum += ceil((double)v[i] / (double)divi);
        }
        return sum;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int start = 1, end = findMax(nums);

        // applying binary search
        while(start <= end) {
            int mid = (start + end) / 2;

            // calculate sum by mid as divisor
            int sumByD = sumByDivisor(nums, mid);

            // check if sum is within threshold
            if(sumByD <= threshold){
                end= mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return start;
    }
};

*/