//demonstrates friend functions and operators overloading

#include <iostream>
#include <string>

using namespace std;

class Critter
{
    //make the following global functions friends of the Critter Class
    friend void Peek(const Critter& aCritter);
    friend ostream& operator<<(ostream& os, const Critter& aCritter);

    public:
        Critter(const string& name = " ");
    private:
        string m_Name;
};

Critter::Critter(const string& name): m_Name(name)
{}

void Peek(const Critter& aCritter);
ostream& operator<<(ostream& os, const Critter& aCritter);

int main()
{
    Critter crit("Poochie");
    cout << "Calling Peek() to access the crit's private data member, m_Name: \n";
    Peek(crit);

    cout << "\nSending crit object to cout with the << operator:\n";
    cout << crit;

    return 0;
}

//global friend function that can access all of a Critter object's members
void Peek(const Critter& aCritter)
{
    cout << aCritter.m_Name << endl;
}

//global friend function that can access all of Critter's object members
//overloads the << operator so you can send a Critter object to cout
ostream& operator<<(ostream& os, const Critter& aCritter)
{
    os << "Critter's Object - ";
    os << "m_Name: " << aCritter.m_Name;
    return os;
}