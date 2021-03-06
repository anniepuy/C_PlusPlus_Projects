#include <iostream>

using namespace std;

class Tricycle
{
    public:
        int getSpeed();
        void setSpeed(int speed);
        void pedal();
        void brake();
    private:
        int speed;
};

//get the trikes speed
int Tricycle::getSpeed()
{
    return speed;
}

//set the trike's speed
void Tricycle::setSpeed(int newSpeed)
{
    if (newSpeed >=0)
    {
        speed = newSpeed;
    }
}

//pedal the trike
void Tricycle::pedal()
{
    setSpeed(speed + 1);
    cout << "\nPedalin; tricycle speed " << speed << " mph\n";
}
//apply the brake
void Tricycle::brake()
{
    setSpeed(speed-1);
    cout << "\nBraking, tricycle speed " << speed << " mph\n";
}

// create a trike and ride it
int main()
{
    Tricycle wichita;
    wichita.setSpeed(1);
    wichita.pedal();
    wichita.pedal();
    wichita.brake();
    wichita.brake();
    wichita.brake();
    return 0;
}
