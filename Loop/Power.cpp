#include<iostream>
using namespace std;

int main()
{
    int n , pow;
    cout << "Enter Number N : ";
    cin>> n;
    cout << "Enter Pow : ";
    cin >> pow;
    int num = n;
    for ( int i = 1; i < pow; i++)
    {
        num = num*n;
    }
    cout << num;


};