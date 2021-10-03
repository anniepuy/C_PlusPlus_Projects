#include <iostream>

using namespace std;

int main()
{
    //defining character values
    auto strength = 40;
    auto accuracy = 14.3;
    auto dexterity = 32.0;

    //creating the constant
    const auto MAXIMUM = 50;

    //cacluating the character stats
    auto attack = strength * (accuracy / MAXIMUM);
    auto damage = strength * (dexterity / MAXIMUM);

    cout << "\nAttack rating: " << attack << "\n";
    cout << "Damage rating: " << damage << "\n";

    return 0;

}