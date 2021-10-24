#include <iostream>

//Deep Copy constructor creates a new member object from the copy constructor, but also assigns varaible
//memory space to the new object
using namespace std;

class Tricycle
{
    public:
        Tricycle(); //default constructor 
        Tricycle(const Tricycle&); // copy constructor
        ~Tricycle(); // deconstructor
        int getSpeed() const { return *speed;}
        void setSpeed(int newSpeed) { *speed = newSpeed; }
        void pedal();
        void brake();

    private:
        int *speed;
};

Tricycle::Tricycle()
{
    speed = new int;
    *speed = 5;
}

Tricycle::Tricycle(const Tricycle& rhs) //rhs stands for right hand side
{
    speed = new int;
    *speed = rhs.getSpeed();
}

Tricycle::~Tricycle()
{
    delete speed;
    speed = NULL;
}

void Tricycle::pedal()
{
    setSpeed(*speed + 1);
    cout << "\nPedaling " << getSpeed() << " mph" << endl;
}

void Tricycle::brake()
{
    setSpeed(*speed - 1);
    cout << "\nPedaling " << getSpeed() << " mph" << endl;
}

int main()
{
    cout << "Creating trike named wichita...";
    Tricycle wichita;
    cout << "Creating trike named dallas ..." << endl;
    Tricycle dallas(wichita);
    cout << "wichita's speed: " << wichita.getSpeed() << endl;
    cout << "dallas's speed: " << dallas.getSpeed() << endl;
    cout << "setting wichita to 10..." << endl;
    wichita.setSpeed(10);
    cout << "wichita's speed: " << wichita.getSpeed() << endl;
    cout << "dallas's speed: " << dallas.getSpeed() << endl;
    return 0;
}