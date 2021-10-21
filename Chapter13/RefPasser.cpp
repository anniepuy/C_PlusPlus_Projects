#include <iostream>

using namespace std;

//using references to access constant pointers to constant objects to access data

class SimpleCat
{
    public:
        SimpleCat();
        SimpleCat(SimpleCat&);
        ~SimpleCat();

        int GetAge() const 
            {
                return itsAge;
            }
        void SetAge(int age) 
            {
                itsAge = age;
            }

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
    cout << "Simple Cat Desconstructor..."  << endl;
}

const SimpleCat & FunctionTwo (const SimpleCat & theCat);

int main()
{
    cout << "Making a cat..." << endl;
    SimpleCat Frisky;
    cout << "Frisky is " << Frisky.GetAge()
        << " years old." << endl;

    int age = 5;
    Frisky.SetAge(age);
    cout << "Frisky is " << Frisky.GetAge()
        << " years old now." << endl;

    cout << "Calling FunctionTwo..." << endl;
    FunctionTwo(Frisky);
    cout << "Frisky is " << Frisky.GetAge()
        << " years old." << endl;
    return 0;
}

//functionTwo passes a ref to a const object
const SimpleCat & FunctionTwo (const SimpleCat & theCat)
{
    cout << "Function Two. Returning..." << endl;
    cout << "Frisky is now " << theCat.GetAge()
        << " years old" << endl;
    // theCat.SetAge(8); const!
    return theCat;
}
