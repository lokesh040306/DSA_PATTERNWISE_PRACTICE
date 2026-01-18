/*

class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        
        int n = arr.size();
        int start = 0, end = n - 1;
        int mini = INT_MAX;
        int idx = 0;
        
        while(start <= end) {
            
            int mid = start + (end - start) / 2;
            
            // check if the current subarray is already sorted
            if(arr[start] <= arr[end]) {
                if(arr[start] <= mini) {
                    mini = arr[start];
                    idx = start;
                }
                break;
            }
            
            // left side is sorted
            if(arr[start] <= arr[mid]) {
                if(arr[start] <= mini) {
                    mini = arr[start];
                    idx = start;
                }
                start = mid + 1;
            }
            else {
                if(arr[mid] <= mini) {
                    mini = arr[mid];
                    idx = mid;
                }
                end = mid - 1;
            }
        }
        
        return idx;
    }
};


*/