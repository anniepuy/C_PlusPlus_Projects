#include "Tricycle.hpp"


//constructor for the object
Tricycle::Tricycle(int initialSpeed)
{
    setSpeed(initialSpeed);
}

//destrcutor for the object
//Tricycle::~Tricycle()
//{
    //do nothing
//} Had to remove the deconstructor b/c Visual Studio is throwing an error

//set the Trike's Speed
void Tricycle::setSpeed(int newSpeed)
{
    if (newSpeed >= 0)
        speed = newSpeed;
}

// create a trike and ride it
int main()
{
    Tricycle wichita(5);
    wichita.pedal();
    wichita.pedal();
    wichita.brake();
    wichita.brake();
    wichita.brake();
    return 0;
}