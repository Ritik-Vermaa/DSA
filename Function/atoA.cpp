#include<iostream>
using namespace std;


char convert(char name)
{
    name = name - 32;
    return name;
}

int main()
{
    char name;
    cout<<"Enter char in small letter : ";
    cin>>name;

    cout<<convert(name);
}