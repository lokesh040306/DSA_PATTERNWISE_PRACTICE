/*

class Solution {
    int findMax(vector<int>& piles) {
        int maxi = INT_MIN;

        for(int i = 0; i < piles.size(); i++) {
            maxi = max(maxi, piles[i]);
        }

        return maxi;
    }
    
    long long totalHours(vector<int>& piles, int speed) {

        long long totalH = 0; // must be long long!

        for (int i = 0; i < piles.size(); i++) {
            totalH += (piles[i] + speed - 1LL) / speed; // avoid overflow
        }

        return totalH;
    }
    
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        // Binary Search
        
        int start = 1;
        // Find the maximum pile to set as the upper limit
        int end = findMax(piles);
        int result = end;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            // Calculate total hours needed at speed mid
            long long totalH = totalHours(piles, mid);

            // If total hours is within the limit, try a slower speed
            if(totalH <= h) {
                result = mid;
                end = mid - 1;
            } 
            else {
                start = mid + 1;
            }
        }

        return result;
    }
};

*/