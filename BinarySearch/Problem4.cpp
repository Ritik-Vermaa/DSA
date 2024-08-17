#include <iostream>
using namespace std;    

void binarySearch(int arr[], int n, int target, int start, int end)
{
    while(start <= end)
    {
        int mid = start + (end - start)/2;

        if(arr[mid] == target)
        {
            cout << "Element found at index: " << mid<<endl;
            return;
        }
        else if(arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << "Element not found in the array"<<endl;
}


int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int target = 8;
    int start = 0; 
    int end = n-1;

    binarySearch(arr, n, target, start, end);
}