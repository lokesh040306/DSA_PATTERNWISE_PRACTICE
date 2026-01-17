/*

class Solution {
    int firstOccurance(vector<int>& arr, int target) {
        int start = 0, end = arr.size() - 1;
        int first = -1;
        
        while(start <= end) {
            int mid = (start + end) / 2;
            
            if(arr[mid] == target) {
                first = mid;
                end = mid - 1;
            }
            else if(arr[mid] > target) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        return first;
    }
    
    int secondOccurance(vector<int>& arr, int target) {
        int start = 0, end = arr.size() - 1;
        int last = -1;
        
        while(start <= end) {
            int mid = (start + end) / 2;
            
            if(arr[mid] == target) {
                last = mid;
                start = mid + 1;
            }
            else if(arr[mid] > target) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        return last;
    }
    
  public:
    int countFreq(vector<int>& arr, int target) {
        int first = firstOccurance(arr, target);
        
        if(first == -1) return 0; // Early Return
        
        int last = secondOccurance(arr, target);
        
        return last - first + 1;
    }
};

*/