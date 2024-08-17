#include<iostream>
using namespace std;

int main()
{
    int row , col , printNumber=0;
    for(row=1;row<=5;row++)
    {
        for(col=1;col<=5;col++)
        {
            printNumber = printNumber+1;
            cout << printNumber << " ";
        }
        cout<<endl;
    }
}