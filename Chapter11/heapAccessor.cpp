#include <iostream>

using namespace std;

class SimpleCat
{
    public:
        SimpleCat() { itsAge = 2; } 
        //creates the object in the class, assigns value to the variable in the class
        ~SimpleCat() {} //deregisters the object
        int GetAge() const { return itsAge; }
        //creates an const int that will return the value assigned to itsAge when called
        void SetAge(int age) { itsAge = age; }
        //creates SetAge that takes an interger as a parameter, which is assigned to the variable itsAge
    private:
        int itsAge; 
};

int main()
{
    SimpleCat *Frisky = new SimpleCat;//instantiates the class SimpleCat with a pointer called Frisky.
    cout << "Frisky is " << Frisky->GetAge()
    << " years old." << endl;

    Frisky->SetAge(5);  //Assigns five to the pointer Frisky
    cout << "Frisky is " << Frisky->GetAge()
    << " years old" << endl;

    delete Frisky;
    return 0;

}