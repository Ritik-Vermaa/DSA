#include <iostream>
#include <vector>
using namespace std;

int findPivot(vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return start;
}

int main()
{
    vector<int> arr = {2,4, 5, 6, 7, 0, 1};
    cout << findPivot(arr) << endl;
    return 0;
}8