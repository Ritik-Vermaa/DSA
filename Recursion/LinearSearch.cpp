#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int x)
{
    if (n == 0)
        return false;

    if (arr[0] == x)
        return true;
    else
        return linearSearch(arr + 1, n - 1, x);
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int x = 6;

    int ans = linearSearch(arr, n, x);

    if (ans)
        cout << "Element found";
    else
        cout << "Element not found";
    return 0;
}