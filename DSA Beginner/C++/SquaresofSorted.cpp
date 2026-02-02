class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
    for(int i = 0;i<nums.size();i++)
    {
       nums[i] = nums[i]*nums[i];
    }
    int n = nums.size();
    for(int i = 0;i<n;i++)
    {
   
    for(int j=i+1;j<n;j++)
    {
        if(nums[i]>nums[j])
        {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
        }
    }
    }

    return nums;
    }
};