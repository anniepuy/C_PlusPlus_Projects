#include <iostream>

using namespace std;

//more optimal way to pass a value but maintain security of not sending the reference, make it a const pointer

class SimpleCat
{
    public: 
        SimpleCat();
        SimpleCat(SimpleCat&);
        ~SimpleCat();

        int GetAge() const { return itsAge; }
        void SetAge(int age) {itsAge = age; }
    private:
        int itsAge;
};

SimpleCat::SimpleCat()
{
    cout << "Simple Cat Constructor..." << endl;
    itsAge = 1;
}

SimpleCat::SimpleCat(SimpleCat&)
{
    cout << "Simple Cat Copy Constructor..." << endl;
}

SimpleCat::~SimpleCat()
{
    cout << "Simple Cat Deconstructor..." << endl;
}

const SimpleCat * const
FunctionTwo (const SimpleCat *const theCat);

int main()
{
    cout << "Making a cat ..." << endl;
    SimpleCat Frisky;
    cout << "Frisky is ";
    cout << Frisky.GetAge() << " years old" << endl;
    int age = 5;
    Frisky.SetAge(age);
    cout << "Frisky is ";
    cout << Frisky.GetAge() << " years old" << endl;
    cout << "Calling FunctionTwo..." << endl;
    FunctionTwo(&Frisky);
    cout << "Frisky is ";
    cout << Frisky.GetAge() << " years old" << endl;
    return 0;
}

//functionTwo, passes a const pointer
const SimpleCat * const
FunctionTwo (const SimpleCat * const theCat)
{
    cout << "Function Two. Returning..." << endl;
    cout << "Frisky is now " << theCat->GetAge();
    cout << " years old\n";
    //theCat->SetAge(8); const!
    return theCat;
}