// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{
     int arr[5] = {10,20,30,40,50};
     int l = 0 , r = 4;
     int temp;
     while(l<r)
     {
          temp = arr[l];
          arr[l] = arr[r];
          arr[r] = temp;
          l++;
          r--;
     }
    for(int i = 0; i<=4; i++) {
        cout<<arr[i]<<" ";
    } 
  return 0;
}