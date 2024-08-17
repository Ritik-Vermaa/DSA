#include<iostream>
using namespace std;

int main()
{
    int arr[6] ={5,9,6,8,5,7};
    int FindValue = 8;
    for(int i=0;i<6;i++)
    {
        if(arr[i]== FindValue)
        {
            cout<<"Value find at "<< i <<" Index";
        }
    }
}