#include <iostream>

using namespace std;

//create the class
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
    int speed;
};

//constructor for the object
Tricycle::Tricycle(int initialSpeed)
{
    setSpeed(initialSpeed);
}

//deconstructor for the object
Tricycle::~Tricycle()
{
    //do nothing
}

// get the trike's speed
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

//pedal the trike
void Tricycle::pedal()
{
    setSpeed(speed +1);
    cout << "\nPedaling; tricycle speed " << getSpeed() << " mph\n";
}

//apply the brake on the trike
void Tricycle::brake()
{
    setSpeed(speed -1);
    cout << "\nBraking; tricycle speed " << getSpeed() << "mph\n";
}

//creat a trike and ride it
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