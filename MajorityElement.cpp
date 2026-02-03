// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) 
{
        int element = 0, count = 0;
        for (int i = 0; i < nums.size(); i++) 
        {
            if (count == 0) 
            {
                element = nums[i];
            }
            if (element == nums[i]) 
            {
                count++;
            } 
            else 
            {
                count--;
            }
        }
        return element;
}
    
    
int main() {
    // Write C++ code here
    vector<int> nums = {3, 3, 4, 2, 4, 4, 2, 4, 4}; 
    int majority = majorityElement(nums);
    cout << "Majority Element: " << majority << endl;
    return 0;
}