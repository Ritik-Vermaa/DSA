#include <iostream>
using namespace std;

int main()
{
    int n, sum, i;
    cout << "Enter a number : ";
    cin >> n;
    sum = 0;

    // method 1
    // for (i = 0; i <= n; i++)
    // {
    //     sum = sum + i;
    // }
    // cout << "The Sum is : " << sum;

    // method 2
    
    cout << n * (n + 1) / 2;
};