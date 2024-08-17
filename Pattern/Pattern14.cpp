#include<iostream>
using namespace std;

int main()
{
    int row,col;
    char c='a';
    
    for(row=1;row<=5;row++)
    {
        for(col=1;col<=row;col++)
        {
            cout<<c<<" ";
        }
        c=c+1;
        cout<<endl;
    }
}