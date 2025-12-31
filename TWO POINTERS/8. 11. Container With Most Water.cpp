/*

class Solution {
public:
    int maxArea(vector<int>& height) {
        
        // TWO-POINTERS

        int n = height.size();
        int left = 0, right = n - 1;

        int maxArea = 0;

        while(left < right) {

            int ht = min(height[left], height[right]);
            int width = right - left;
            int area = ht * width;
            maxArea = max(maxArea, area);

            if(height[left] < height[right]) {
                left++;
            }
            else {
                right--;
            }
        }

        return maxArea;
    }
};

*/