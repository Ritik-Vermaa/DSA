#include <iostream>
#include <vector>

using namespace std;

// Find First Position of Element in Sorted Array
int firstPosition(vector<int> arr, int target)
{

    int start = 0, end = arr.size() - 1, mid, first = -1;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            first = mid;
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return first;
}

// Find Last Position of Element in Sorted Array

int lastPosition(vector<int> arr, int target)
{
    int start = 0, end = arr.size() - 1, mid, last = -1;


    while (start <= end)
    {
    mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            last = mid;
            start = mid + 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return last;
}

int main()
{
    vector<int> arr = {5, 7, 7, 8, 8, 8, 8, 8, 10};
    int target = 8;

    vector<int> ans = {firstPosition(arr, target), lastPosition(arr, target)};
    cout << "First Position: " << ans[0] << endl;
    cout << "Last Position: " << ans[1] << endl;

    return 0;
}