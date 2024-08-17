#include <iostream>
using namespace std;

int main()
{
    int n, fact , i;
    cout << "Enter Number N : ";
    cin >> n;
    fact = 1;

    for ( i = 1; i <=n; i++)
    {
        fact = fact*i;
    }
    cout << fact;
}