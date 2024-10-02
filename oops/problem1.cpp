#include <iostream>
using namespace std;

class Hero
{
    // Properties
public:
    int health;

     void getLevel()
    {
        cout << "Level is " << level << endl;
    }
    void setLevel()
    {
        level = 'A';
    }

private:
    char level;

   
};

int main()
{
    Hero h1;
    cout << sizeof(h1) << endl;
    h1.health = 100;
    cout << h1.health << endl;
    h1.getLevel();
    h1.setLevel(); 
    return 0;
}