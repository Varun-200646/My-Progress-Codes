// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) 
{
    int i = 0;
    for(int j = 0; j < nums.size(); j++)
    {
        if(nums[j] != 0)
        {
            swap(nums[j], nums[i]);
            i++;
        }
    }
}

int main() {
    
    vector<int> nums = {0,0,20,30,40};
    moveZeroes(nums);
    
    for(int num : nums) {
        cout << num << " ";
    }
    
    return 0;
}