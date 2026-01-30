#include <iostream>
#include <vector>
using namespace std;

int main() {
   
   vector<int> nums = {2,7,11,15};
   int target = 9;
   
   for (int i = 0; i<=nums.size() ; i++) 
   {
       for (int j = i+1; j<nums.size() ; j++) 
       {
           int value = nums[i] + nums[j];
           if(value == target) 
           {
               cout<<i<<" "<<j;
           }
       }
   }
   cout<<endl;
   return 0;
}