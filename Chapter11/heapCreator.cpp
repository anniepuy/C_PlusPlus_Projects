#include <iostream>

using namespace std;
//Lines 3-10 create a simple Class called SimpleCat
class SimpleCat
{
    public:
        SimpleCat();
        ~SimpleCat();
    private:
        int itsAge;
};

SimpleCat::SimpleCat()
{
    cout << "Constructor called\n";
    itsAge = 1;
}

SimpleCat::~SimpleCat()
{
    cout << "Deconstructor called\n";
}

int main()
{
    cout << "SimpleCat Frisky ....\n";
    SimpleCat Frisky; //Creates SimpleCat on the heap, calling the constructor 

    cout << "SimpleCat *pRags = new SimpleCat....\n";
    SimpleCat * pRags = new SimpleCat; //now SimpleCat is pointed to pRags on the heap

    cout << "delete pRags....\n";
    delete pRags;

    cout << "Exciting, watch Frisky go....\n";
    return 0;
}


