#include<iostream>
using namespace std;

int power(int n)
{
    // Base case
    if(n==0) return 1;

    // Recursive case
    return 2*power(n-1);
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int ans = power(n);

    cout<<ans<<endl;
}