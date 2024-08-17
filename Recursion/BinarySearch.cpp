#include<iostream>
using namespace std;

bool binarySearch(int arr[], int s,int e, int x)
{
    //base case
    if(s>e)
    {
        return false;
    }
    int mid = s+(e-s)/2;
    if(arr[mid] == x)
    {
        return true;
    }

   
    if(arr[mid] > x)
    {
        return binarySearch(arr,s,mid-1,x);
    }
    else
    {
        return binarySearch(arr,mid+1,e,x);
    }
}

int main()
{
    int arr[7] = {2,4,6,10,14,16,18};
    int n = 7;
    int x = 18;
    int ans  = binarySearch(arr,0,n-1,x);
    if(ans)
    {
        cout<<"Element found";
    }
    else
    {
        cout<<"Element not found";
    }


    return 0;
}