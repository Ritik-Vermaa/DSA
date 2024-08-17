#include<iostream>
using namespace std;

int main()
{
    int a[5] ={8,5,9,65,8};
    int ans = INT_MIN;

    for(int i=0;i<5;i++)
    {
        if(a[i]>ans)
        {
            ans=a[i];
        }
    }
    cout<<ans;
}