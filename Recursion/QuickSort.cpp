#include<iostream>
using namespace std;

int partition(int arr[], int start, int end)
{
    int pivot = arr[start];

    int count = 0;
    for(int i=start+1; i<=end; i++)
    {
        if(arr[i] <= pivot)
        {
            count++;
        }
    }

    //palce pivot at correct position
    int pivotIndex = start + count;
    swap(arr[start], arr[pivotIndex]);

    //placing elements smaller than pivot on left side and greater on right side
    int i = start, j = end;
    while(i<=pivotIndex && j>=pivotIndex)
    {
        if(arr[i] <= pivot)
        {
            i++;
        }
        else if(arr[j] > pivot)
        {
            j--;
        }
        else
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    return pivotIndex;

}


void quickSort(int arr[], int start , int end )
{
    //base case
    if(start >= end)
    {
        return;
    }
    //partitioning kar rahe hain
    int p = partition(arr, start, end);

    //left side of pivot
    quickSort(arr, start, p-1);

    //right side of pivot
    quickSort(arr, p+1, end);

}

int main()
{
    int arr[5] = {5,3,1,2,4};
    int n = 5;

    quickSort(arr, 0, n-1);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}