#include <iostream>
#include <vector>
using namespace std;

int searchInRotatedArray(vector<int> &arr, int target)
{
    int start = 0, end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        // Left side sorted array
        else if (arr[mid] >= arr[0])
        {
            if (arr[start] <= target && arr[mid] >= target)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        // Right Side sorted array
        else
        {
            if (arr[mid] <= target && arr[end] >= target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int target = 2;
    cout << searchInRotatedArray(arr, target) << endl;
    return 0;
}