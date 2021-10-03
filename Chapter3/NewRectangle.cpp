#include <iostream>

using namespace std;

int main()
{
    //declare a type
    typedef unsigned short USHORT;

    //set up width and length
    USHORT width = 26;
    USHORT length = 45;
    
    //create an unsigned short initialized with 
    //the result of length and width
    USHORT area = width * length;

    cout << "Length: " << length << "\n";
    cout << "Width: " << width << "\n";
    cout << "Area: " << area << "\n";

    return 0;
}