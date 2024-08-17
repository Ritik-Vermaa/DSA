#include<iostream>
using namespace std ;

int main()
{
    int i , n , squre;
    cout <<"Enter number n : ";
    cin >> n;
    squre = 0;
    for ( i = 1; i <=n; i++)
    {
        squre = squre + i*i;
    }
    cout << squre;
    
}
