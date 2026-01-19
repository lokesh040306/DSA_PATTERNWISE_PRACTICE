/*

class Solution {
public:
    int mySqrt(int x) {

        // Binary Search
        
        // Edge Cases
        if(x == 0 || x == 1) return x;
        
        long long ans = 0;
        long long start = 1, end = x;
        
        while(start <= end) {
            long long mid = start + (end - start) / 2;
            
            long long square = mid * mid;
            
            // Found the exact square root
            if(square == x) {
                return mid;
            }
            
            if(square > x) {
                end = mid - 1;
            }
            else {
                ans = mid;
                start = mid + 1;
            }
        }

        return ans;
    }
};

*/