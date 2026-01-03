/*

class Solution {
public:
    int trap(vector<int>& height) {
        
        // TWO-POINTERS

        int leftMax = 0, rightMax = 0, total = 0;
        int left = 0, right = height.size() - 1;

        while(left < right) {

            // When left number is smaller than right
            if(height[left] <= height[right]) {
                // If left-max is greater than the current 
                if(leftMax > height[left]) {
                    total += leftMax - height[left];
                }
                else {
                    // update the left-max
                    leftMax = height[left];
                }
                left++;
            }
            else {
                // If right-max is greater than the current 
                if(rightMax > height[right]) {
                    total += rightMax - height[right];
                }
                else {
                    // update the right-max
                    rightMax = height[right];
                }
                right--;
            }
        }
        return total;
    }
};

*/