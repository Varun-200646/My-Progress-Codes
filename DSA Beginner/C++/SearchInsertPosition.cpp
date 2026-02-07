// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) 
{
     int n = nums.size();
     for(int i=0;i<=n;i++)
     {
         if (target==nums[i])
         {
             return i;
         }
         if(target<nums[i])
         {
             return i;
         }
     }
     return n;
    
}

int main() {
   vector<int> nums = {10,20,30,40};
   int target = 50;
   int k = searchInsert(nums,target);
   cout<<k;
    return 0;
}