#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool divide(vector<int>arr)
{
    int maxi = INT_MIN;
    int prefix = 0 , n = arr.size();

    //Total Sum
    int Total_Sum=0;
    for(int i =0 ;i<n ; i++)
    {
        Total_Sum += arr[i];
    }

    for(int i = 0 ; i<n ; i++)
    {
        prefix +=arr[i];
        int ans = Total_Sum - prefix;
        if (ans == prefix)
        {
            return 1;
        }
        
    }
    return 0;
}

int main()
{
    int n;
    cout<<"Enter the Size of your Vector : ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter the element in vector : ";
    for(int i=0 ;i<n; i++)
    {
        cin>>v[i];
    }

    cout<<divide(v);
}