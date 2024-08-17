#include<iostream>
using namespace std;

int main()
{
    int nums = 5;

    cout<<nums<<endl;

    cout<<&nums <<endl;

    int *pointer = &nums;

    cout<<*pointer<<endl;
    cout<<pointer<<endl;

 return 0;
}