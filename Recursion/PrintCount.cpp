#include<iostream>
using namespace std;

void print(int n)
{
    // Base case
    if(n==0) return;

    // Recursive case
    cout<<n<<" ";
    print(n-1);
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    print(n);
}