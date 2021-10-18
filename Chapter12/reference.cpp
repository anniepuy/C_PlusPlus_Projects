#include <iostream>

using namespace std;
//adds a reference to an int initialized
int main()
{
    int intOne;
    int &rSomeRef = intOne;

    intOne = 5;
    cout << "intOne: " << intOne << endl;
    cout << "rSomeRef: " << rSomeRef << endl;

    rSomeRef = 7;
    cout << "intOne: " << intOne << endl;
    cout << "rSomeRef: " << rSomeRef << endl;

    //asking for the address of the target reference
    cout << "&intOne: " << &intOne << endl;
    cout << "&rSomeRef: " << &rSomeRef << endl;

    return 0;
}
