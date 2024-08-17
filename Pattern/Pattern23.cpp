#include<iostream>
using namespace std;

int main()
{
    int n;
    int row,col;

    cout<<"Enter The Number : ";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        //print space
        for(col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        //print half 
        for(col=1;col<=row;col++)
        {
            cout<<col;
        }

        for(col=row-1;col>=1;col--)
        {
            cout<<col;
        }
        cout<<endl;

    }
}