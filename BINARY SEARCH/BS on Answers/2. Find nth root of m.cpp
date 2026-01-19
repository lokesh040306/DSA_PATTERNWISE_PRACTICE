/*

class Solution {
    long long findCube(int n, int num, int m) {
        long long ans = 1;
        while(n--) {
            ans *= num;
            if(ans > m) return ans;
        }
        return ans;
    }
    
  public:
    int nthRoot(int n, int m) {
        
        if(m == 0 || m == 1) return m;
        
        long long start = 1, end = m;
        long long ans = 1;
        
        while(start <= end) {
            long long mid = (start + end) / 2;
            
            long long ans = findCube(n, mid, m); 
            
            if(ans == m) {
                return mid;
            }
            else if(ans < m) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        return -1;
    }
};

*/