#include<iostream>
using namespace std;

int main()
{
    int  col;
    char row;
   

    for(row='a';row<='e';row++)
    {
        for(col=1;col<=5;col++)
        {
            cout << row << " ";
        }
        cout << endl;
    }
}