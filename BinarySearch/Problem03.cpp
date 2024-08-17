//Peak Index in mountain Array

#include<iostream>
using namespace std;

int main()
{
     int arr[1000];
    int n;
    cout << "Enter size of the array: ";
    cin >> n;
    cout << "Enter the elements in the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


   int start = 0,end = n-1 , mid;

   while(start<=end)
   {
     
     mid = (start+end)/2;

     if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
     {
        return mid;
     }
     else if(arr[mid]>arr[mid-1])
     {
        start=mid+1;
     }
     else
     {
        end = mid-1;
     }
   }
}