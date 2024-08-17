#include<iostream>
#include<vector>
using namespace std;

// broute force approach
// bool binarySearch(vector<vector<int>> arr, int target)
// {

//     int row = arr.size();
//     int col = arr[0].size();

//     int start = 0;
//     int end = row*col - 1;
//     int mid;


//     while(start<=end)
//     {
//         mid = start + (end-start)/2;

//         int indexOfElement = arr[mid/col][mid%col]; // Row index = mid/col, Column index = mid%col

//         if(indexOfElement == target)
//         {
//             return true;
//         }
//         else if(indexOfElement < target)
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//     }
//     return false;
// }

// Optimized approach
bool binarySearch(vector<vector<int>> arr, int target)
{
    int row = arr.size();
    int col = arr[0].size();

    int start = 0;
    int end = col - 1;

    while(start<row && end>=0)
    {
        if(arr[start][end] == target)
        {
            return true;
        }
        else if(arr[start][end] < target)
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> arr = {
        {1,2,5,6},
        {7,8,9,10},
        {11,12,13,14},
        {15,16,17,18}
    };
    int target = 11;

    binarySearch(arr, target);

    if(binarySearch(arr, target))
    {
        cout<<"Element found"<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }
    return 0;
}