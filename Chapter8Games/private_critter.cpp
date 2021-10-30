//demonstrating private classes

#include <iostream>

using namespace std;

class Critter
{
    public:  // begin public section
        Critter(int hunger = 0);
        int GetHunger() const;
        void SetHunger(int hunger);
    private: // begin private session
        int m_hunger;
};

Critter::Critter(int hunger):m_hunger(hunger) //create the crittter with the private int
{
    cout << "A new critter has been born!\n" << endl;
}

int Critter::GetHunger() const //call the class method 
{
    return m_hunger;
}

void Critter::SetHunger(int hunger)
{
    if (hunger < 0)
    {
        cout << "You can't set a critter's hunger to a negative number.\n\n";
    }
    else
    {
        m_hunger = hunger;
    }    
}

int main()
{
    Critter crit(5);
    //cout << crit.m_hunger: // illegal, m_hunger is private!
    cout << "Calling GetHunger(); " << crit.GetHunger() << "\n\n";

    cout << "Calling SetHunger() with -1.\n";
    crit.SetHunger(-1);

    cout << "Calling SetHunger() with 9\n";
    crit.SetHunger(9);
    cout << "Calling GetHunger(): " <<crit.GetHunger() << "\n\n";

    return 0;
}