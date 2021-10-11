//Creating a class definition in a header file

#include <iostream>
using namespace std;

class Tricycle
{
public:
    Tricycle(int initialSpeed);
    //~Tricyle();  Throws an error with the deconstructor. Weird
    int getSpeed() const { return speed; }
    void setSpeed(int speed);
    void pedal()
    {
        setSpeed(speed + 1);
        cout << "Pedaling " << getSpeed() << " mph\n\n";
    }
    void brake()
    {
        setSpeed(speed -1);
        cout << "Pedaling " << getSpeed() << " mph\n";
    }
private:
    int speed;
};