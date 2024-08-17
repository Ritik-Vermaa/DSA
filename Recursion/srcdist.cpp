#include<iostream>
using namespace std;

void reachHome(int src, int dist)
{
    // Base case
    if(src == dist)
    {
        cout<<"aa gaya ghar";
        return;
    }

    // Recursive case
    reachHome(src+1, dist);

}

int main()
{
    int dist = 10;
    int src = 1;

    cout<<endl;

    reachHome(src, dist);
}