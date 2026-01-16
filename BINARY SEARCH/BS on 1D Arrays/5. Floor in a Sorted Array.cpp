/*

class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        
        int n = arr.size();
        int start = 0, end = n - 1;
        int ans = -1;
        
        while(start <= end) {
            
            int mid = start + (end - start) / 2;
            
            // Check if mid is potential answer
            if(arr[mid] <= x) {
                ans = mid;
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        
        return ans;
    }
};


*/