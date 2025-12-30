/*

class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        int n = arr.size();
        
        if(n <= 1) return false;
        
        sort(arr.begin(), arr.end());
        
        int left = 0, right = n - 1;
        
        while(left < right) {
            int sum = arr[left] + arr[right];
            if(sum == target) {
                return true;
            }
            else if(sum > target) {
                right--;
            }
            else {
                left++;
            }
        }
        return false;
    }
};

*/