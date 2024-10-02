#include<iostream>
using namespace std;

class Hero
{
    public:
    int health;

};

int main()
{
    // Static memory allocation
    Hero h1;
    cout << sizeof(h1) << endl;
    h1.health = 100;
    cout << h1.health << endl;

    // Dynamic memory allocation
    Hero *h2 = new Hero();
    cout << sizeof(h2) << endl;
    h2->health = 200;
    cout << h2->health << endl;

    delete h2;
    return 0;
}