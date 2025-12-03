class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0;                     // Start pointer
        int right = height.size() - 1;    // End pointer
        int left_max = 0;                 // Max height from left
        int right_max = 0;                // Max height from right
        int water = 0;                    // Total trapped water

        while (left <= right) {
            if (height[left] < height[right]) {
                if (height[left] >= left_max) {
                    left_max = height[left];  // Update left_max
                } else {
                    water += left_max - height[left];  // Water trapped at current index
                }
                left++;
            } else {
                if (height[right] >= right_max) {
                    right_max = height[right];  // Update right_max
                } else {
                    water += right_max - height[right];  // Water trapped at current index
                }
                right--;
            }
        }

        return water;
    }
};
