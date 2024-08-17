#include<iostream>
using namespace std;

int main()
{
    int n;
    int row,col;

    cout<<"Enter The Number : ";
    cin>>n;

    for(row=n;row>=1;row--)
    {
        for(col=n-row;col>=1;col--)
        {
            cout<<" ";
        }
        for(col=2*row-1;col>=1;col--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}