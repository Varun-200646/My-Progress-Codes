// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{
     int arr[5] = {1,0,1,0,1};
     int idx = 0;
     for(int i=0;i<=4;i++)
     {
         if(arr[i]==0) {
             arr[idx++] = arr[i];
         }
     }
     while(idx<4) {
         arr[idx++] = 1;
     }
     for(int i=0;i<=4;i++) {
         cout<<arr[i];
     }
}