#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {5, 9, 8, 21, 7, 6, 4};

    //Largest element
    int ans = INT_MIN;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] > ans)
        {
            ans = arr[i];
        }
    }
      

    //second largest
    int second =INT_MIN;
    for( int i =0 ; i<7 ;i++)
    {
        if(arr[i] != ans)
        {
            second = max(second,arr[i]);
        }
    }

    cout<<second<<" ";
    
}