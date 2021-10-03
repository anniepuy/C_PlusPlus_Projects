#include <iostream>

using namespace std;

int main()
{
    //setting up enumator
    enum Direction {North, East, South, West};

    //assgining a variable to it
    Direction heading = South;

    cout << "Moving: " << heading << endl;
    return 0;
}