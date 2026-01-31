// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums, int val) {
     int i = 0;
     for (int j = 0; j < nums.size(); j++) 
    {
        if (nums[j] != val) 
        {
            nums[i] = nums[j];
            i++;
        }
    }
       return i;
 }
 
int main() {
    // Write C++ code here
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    int val = 1;

    int k = removeDuplicates(nums,val);

    for(int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    
    
    return 0;
}

