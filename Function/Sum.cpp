#include<iostream>
using namespace std;

int sum(int a, int b)
{
    int sum;
    sum= a+b;
    return sum;
}
int Mul(int a, int b)
{
    int Mul;
    Mul= a*b;
    return Mul;
}

int main()
{
    int a,b;
    cout<<"Enter the Number : ";
    cin>>a>>b;
    cout<<sum(a,b)<<endl;
    cout<<Mul(a,b);
}