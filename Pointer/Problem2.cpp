#include<iostream>
using namespace std;

int main()
{
    //pointerto to int is created and pointing to some garbage address
    int *p;

    cout<<*p<<endl;

    //pointer to int is created and pointing to a valid address
    //Null pointer
    // int *ptr = 0;
    // cout<<*ptr<<endl;
    
    // Pointer increment
    int i = 10;
    int *p1 = &i;
    cout<<*p1<<endl;    

    (*p1)++;
    cout<<*p1<<endl;


    return 0;
}
