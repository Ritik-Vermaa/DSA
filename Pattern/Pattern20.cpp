#include <iostream>
using namespace std;

int main()
{
    int n, row, col;
    char c = 'A';
    cout << "Enter N number : ";
    cin >> n;
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n - row; col++)
        {
            cout << " ";
        }
        for (char c = 'A'; c <= 'A' + row - 1; c++)
        {
            cout << c;
        }

        cout << endl;
    }
}