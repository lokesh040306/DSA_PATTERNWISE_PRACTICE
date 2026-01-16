/*

class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        int n = arr.size();
        int start = 0, end = n - 1;
        int ans = n;
        
        while(start <= end) {
            
            int mid = (start + end) / 2;
            
            // Check if mid is potential answer
            if(arr[mid] == target) {
                start = mid + 1;
            }
            else if(arr[mid] > target){
                ans = mid;
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        return ans;
    }
};


*/