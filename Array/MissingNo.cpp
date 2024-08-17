#include<iostream>
using namespace std;

int main()
{
    int n=5;
    int arr[4] = {1,2,4,5};

    //sum of all element in an array
    int sum = 0;
    for(int i = 0 ; i<n-1 ; i++)
    {
        sum = sum + arr[i];   
    }

    //sum of n number 

    int ans = n*(n+1)/2;


    cout<<ans-sum;
}