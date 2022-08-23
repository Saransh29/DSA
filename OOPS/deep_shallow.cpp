#include <bits/stdc++.h>
using namespace std;

class Hero
{
private:
    int health;

public:
    char *name;
    char level;

    Hero()
    {
        cout << "simple constructor " << endl;
        name = new char[100];
    }

    // paramterized constructor
    Hero(int health, char level)
    {
        // cout<<"parameterized constructor "<<endl;
        this->health = health;
        this->level = level;
    }
    Hero(Hero &h)
    {

        char *ch = new char[strlen(h.name) + 1];
        strcpy(ch, h.name);
        this->name = ch;

        this->health = h.health;
        this->level = h.level;
    }
    void print()
    {
        // cout << endl;
        cout << "  name: " << name;
        cout << "  health: " << health;
        cout << "  level: " << level;
        cout << endl;
    }
    int getHealth()
    {
        return health;
    }
    void setHealth(int health)
    {
        this->health = health;
    }
    char getLevel()
    {
        return level;
    }
    void setLevel(char level)
    {
        this->level = level;
    }
    void setName(char name[])
    {
        strcpy(this->name, name);
    }
};
int main()
{
    Hero h1;
    char name[7] = "sahil";
    h1.setName(name);
    h1.setHealth(100);
    h1.setLevel('A');
    cout<<"h1"<<endl;
    h1.print();

    Hero h2(h1); 
    cout<<"h2"<<endl;
    h2.print();

    h2.name[0] = 'p';

    cout<<"h2"<<endl;
    h2.print();

    cout<<"h1"<<endl;
    h1.print();
}