#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int n, int m)
{
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<m ; j++)
        {
            if(arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

//Print Row wise sum
void rowWiseSum(int arr[][4], int row, int col)
{
    cout<<"Printing Sum ->"<<endl;
    for(int i=0 ; i<row ; i++)
    {
        int sum = 0;
        for(int j=0 ; j<col ; j++)
        {
            sum += arr[i][j];
        }
        cout<<"Sum of "<<i<<" row is: "<<sum<<endl;
    }
    cout<<endl;

}


//Print col wise sum

void colWiseSum(int arr[][4], int row, int col)
{
    cout<<"Printing Sum ->"<<endl;
    for(int i=0 ; i<col ; i++)
    {
        int sum = 0;
        for(int j=0 ; j<row ; j++)
        {
            sum += arr[j][i];
        }
        cout<<"Sum of "<<i<<" col is: "<<sum<<endl;
    }

    cout<<endl;
}


//Print Largest element of the array

void largestElement(int arr[][4], int row, int col)
{
    int max = INT_MIN;
    int rowindex = -1;
    for(int i=0 ; i<row ; i++)
    {
        int sum = 0;
        for(int j=0 ; j<col ; j++)
        {
            sum += arr[i][j];
            if(sum > max)
            {
                max = sum;
                rowindex = i;
            }
        }
    }
   cout<<"Largest element of the array is: "<<max<<" at row "<<rowindex<<endl;
}


int main()
{
   int arr[3][4];

    //Input the elements of the array
    cout<<"Enter the element of the array: "<<endl;
    for(int i=0 ; i < 3 ; i++)
    {
        for(int j=0 ; j<4 ; j++)
        {
            cin>>arr[i][j];
        }
    }

    //output the elements of the array
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<4 ; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Enter the element to serach"<<endl;
    int target;
    cin>>target;
    
    if(isPresent(arr, target,3,4))
    {
        cout<<"Element is present in the array"<<endl;
    }
    else
    {
        cout<<"Element is not present in the array"<<endl;
    }                       

    //Print the row wise sum
    rowWiseSum(arr,3,4);

    //Print the col wise sum
    colWiseSum(arr,3,4);

    //Print the largest element of the array
    largestElement(arr,3,4);

    return 0;
}