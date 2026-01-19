/*

class Solution {
    int findMax(vector<int>& bloomDay) {
        int maxi = INT_MIN;

        for(int i = 0; i < bloomDay.size(); i++) {
            maxi = max(maxi, bloomDay[i]);
        }

        return maxi;
    }
    
    int bloomedBouquets(vector<int>& bloomDay, int days, int k) {
        int bouquets = 0;
        int flowers = 0;

        for(int i = 0; i < bloomDay.size(); i++) {
            // Check if the flower has bloomed by 'days'
            if(days >= bloomDay[i]) {
                // Increment the count of consecutive bloomed flowers
                flowers++;
                // When we have k flowers, we can make a bouquet
                if(flowers == k) {
                    bouquets++;
                    flowers = 0;
                }
            }
            else {
               flowers = 0; 
            }
        }
            
        return bouquets;
    }
    
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        
        if(bloomDay.size() < k * 1ll * m * 1ll) return -1;
        
        int num = findMax(bloomDay);
        // int totalFlowers = k * m;
        
        int start = 1, end = num;
        int result = 0;
        
        while(start <= end) {
            
            int mid = start + (end - start) / 2;
            
            // Calculate how many bouquets can be made by mid days
            int bouquets = bloomedBouquets(bloomDay, mid, k);
            
            // If we can make at least m bouquets, try for a smaller number of days
            if(bouquets >= m) {
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