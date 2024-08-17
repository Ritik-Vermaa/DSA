#include<iostream>
using namespace std;

int main()
// {
//    int arr[6] = {6,11,2,5,6,8};
//    int start = 0 , end = 5;

//    while(start<end)
//    {
//       swap(arr[start],arr[end]);
//       start++;
//       end--;
//    }

//    for(int i =0 ; i<6 ; i++)
//    {
//       cout<<arr[i]<<" ";
//    }
// }

{
   int arr[5] = {6,11,5,6,8};
   int start = 0 , end = 4;
    
   // swap arr
   while(start<end)
   {
      swap(arr[start],arr[end]);
      start++;
      end--;
   }

   //print arr

   for(int i =0 ; i<5 ; i++)
   {
      cout<<arr[i]<<" ";
   }
}