#include <iostream>

using namespace std;

class Tricycle
{
public:
    Tricycle(int initialAge); 
    ~Tricycle();
    int getSpeed();
    void setSpeed(int speed);
    void pedal();
    void brake();
private:
    int speed();
};

//constructor for the object in the class Tricycle
Tricycle::Tricycle(int initialSpeed)
{
    setSpeed(initialSpeed);
}

//deconstructor for the object
Tricycle::~Tricycle()
{
    //do nothing
}

//get the trikes speed
int Tricycle::getSpeed()
{
    return speed;
}

//set the trike's speed
void Tricycle::setSpeed(int newSpeed)
{
    if (newSpeed >= 0)
    {
        speed = newSpeed;
    }
}

// pedal the trike
void  Tricycle::pedal()
{
    setSpeed(speed + 1);
    cout << "\nPedaling; tricycle speed " << getSpeed() << " mph\n";
}

//apply the brake on the table
void Tricycle::brake()
{
    setSpeed(speed -1);
    cout << "\nBraking; tricycle speed " << getSpeed() << " mph\n";
}

// create a trike and ride it
int main()
{
    Tricycle witchita(5);
    witchita.pedal();
    witchita.pedal();
    witchita.brake();
    witchita.brake();
    witchita.brake();
    return 0;
}