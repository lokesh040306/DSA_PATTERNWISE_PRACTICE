/*

class Solution {
private:
    int findDays(vector<int> &weights, int capacity){
        int day = 1, loads = 0;
        
        for(int i = 0; i < weights.size(); i++) {
            if(loads + weights[i] > capacity) {
                // need an extra day
                day++;  // move to next day
                loads = weights[i];  // loads the weights
            }
            else {
                // loads the weights on same day
                loads += weights[i];
            }
        }

        return day;
    }

public:
    int shipWithinDays(vector<int>& weights, int days) {
        
        // Binary Search

        int start = *max_element(weights.begin(), weights.end());
        int end = accumulate(weights.begin(), weights.end(), 0);

        int capacity = 0;

        while(start <= end) {

            int mid = start + (end - start) / 2;

            // find number of days needed with mid as capacity
            int daysCnt = findDays(weights, mid);

            // check if days needed is within given days
            if(daysCnt <= days) {
                capacity = mid;
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }

        return capacity;
    }
};

*/