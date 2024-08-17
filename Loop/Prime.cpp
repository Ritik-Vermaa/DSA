#include <iostream>
using namespace std;

int main()
{
    int i, n;
    cout << "Enter the number : ";
    cin >> n;
    if (n < 2)
    {
        cout << "Number is not prime";
        return 0;
    }
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Number is not prime";
            break;
        }
        else
        {
            cout << "Number is Prime";
            break;
        }
    }
}