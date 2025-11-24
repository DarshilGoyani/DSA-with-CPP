class Solution {
public:
    int averageValue(vector<int>& nums) {
        vector<int> arr;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] %2 != 0 && nums[i] % 3 == 0)
            {
                arr.push_back(nums[i]);   
            }
            
        }
    
        // geting average
        if(arr.size() == 0){
            return 0;
        }

        int total = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            total += arr[i]; 
        }

        int average = total / arr.size();

        return average;
        
    }
};