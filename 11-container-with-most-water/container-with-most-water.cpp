class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n - 1;
        int maxWater = 0;

        while(left < right) {
            int h = (height[left] < height[right]) ? height[left] : height[right];
            int w = right - left;
            int area = h * w;

            if(area > maxWater) {
                maxWater = area;
            }

            // Move the pointer at the shorter line
            if(height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return maxWater;
    }
};
