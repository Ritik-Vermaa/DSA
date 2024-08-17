// First and last position of element in sorted Array
// 2,3,3,3,3,4,5,6 Ans is =1,4

#include <iostream>
using namespace std;

int main() {
    int arr[1000];
    int n;
    cout << "Enter size of the array: ";
    cin >> n;
    cout << "Enter the elements in the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target element: ";
    cin >> target;

    int start = 0, end = n - 1, mid, first = -1, last = -1;
    while (start <= end) {
        mid = (start + end) / 2;
        if (arr[mid] == target) {
            first = mid;
            end = mid - 1;
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    
    start = 0;
    end = n - 1;
    while (start <= end) {
        mid = (start + end) / 2;
        if (arr[mid] == target) {
            last = mid;
            start = mid + 1;
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    int Position[2] = {first, last};
    for (int i = 0; i < 2; i++) {
        cout << Position[i];
        if (i < 1) {
            cout << ", ";
        }
    }

    return 0;
}
