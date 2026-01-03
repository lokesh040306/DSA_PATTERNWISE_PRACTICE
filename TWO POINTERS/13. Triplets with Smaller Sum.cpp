/*

class Solution {

  public:
    long long countTriplets(int n, long long sum, long long arr[]) {
        
        if (n < 3) return 0; // Early return if there are fewer than 3 numbers
    
        sort(arr, arr + n);
        
        long long count = 0;
        
        for(int i = 0; i < n - 2; i++) {
            
            int j = i + 1;
            int k = n - 1;
            
            while(j < k) {
                
                long long currentSum = arr[i] + arr[j] + arr[k];
                
                if(currentSum < sum) {
                    // Including largest if it is satisfying, then in between all must be satisfy
                    count += (k - j);
                    j++;
                }
                else {
                    k--;
                }
            }
        }
        
        return count;
    }
};

*/