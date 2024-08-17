#include<iostream>
#include<string>
using namespace std;

void reverseString(string& name , int start , int end)
{
    cout<<name<<endl;
    // Base Case
    if(start >= end)
    {
        return;
    }

    // Recursive Case
    swap(name[start] , name[end]);
  reverseString(name , start + 1 , end - 1);
}

int main()
{
   string name = "abcde";
    reverseString(name , 0 , name.length() - 1);
    cout<<name<<endl;
    return 0;
}