#include<iostream>
using namespace std;

void reverse(char *name , int len)
{
    int start = 0;
    int end = len-1;
    while(start<end)
    {
        swap(name[start++] , name[end--]);
    }
}

int getLength(char *name)
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cout << "Enter your name: ";
    cin >> name;

    cout << "Your name is " << name << endl;

     int len = getLength(name);
    cout<<"Length is : "<< len<<endl;

    reverse(name , len);
    cout<<"Reverse is : "<< name<<endl;
    return 0;
}