#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter the number of rows and columns: ";
    cin >> m >> n;

    // Create a 2D array
    int **arr = new int *[m];
    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[n];
    }

    // Input elements of the array
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    }

    // Output elements of the array
    cout << "The elements of the array are: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    // Delete the array
    for (int i = 0; i < m; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    
    return 0;
}