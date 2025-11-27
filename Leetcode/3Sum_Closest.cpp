class Solution {
public:
    void bubbleSort(vector<int> &nums) {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (nums[j] > nums[j + 1]) {
                    int temp = nums[j];
                    nums[j] = nums[j + 1];
                    nums[j + 1] = temp;
                }
            }
        }
    }

    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        bubbleSort(nums);
        int closestSum = nums[0] + nums[1] + nums[2];

        for (int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                int currSum = nums[i] + nums[left] + nums[right];

                if (abs(currSum - target) < abs(closestSum - target)) {
                    closestSum = currSum;
                }

                if (currSum == target) {
                    return target;
                }
                else if (currSum < target) {
                    left++;   
                }
                else {
                    right--;  
                }
            }
        }

        return closestSum;
    }
};
