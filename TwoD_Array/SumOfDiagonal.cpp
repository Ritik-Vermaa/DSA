#include<iostream>
using namespace std;

int main()
{
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int first = 0;
    int sec = 0;

    // First Diagonal Sum
    int i = 0;

    while (i < 3)
    {
        first += matrix[i][i];
        i++;
    }

    // Secound Diagonal Sum
    i = 0;
    int j = 3 - 1;
    while (j >= 0)
    {
        sec += matrix[i][j];
        i++;
        j--;
    }

    cout << "First Diagonal Sum: " << first << endl;
    cout << "Secound Diagonal Sum: " << sec << endl;
}