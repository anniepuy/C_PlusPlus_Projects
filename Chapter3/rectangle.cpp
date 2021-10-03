#include <iostream>
using namespace std;

int main()
{
    //creating variables for width and length
    unsigned short width = 26, length;
    length = 40;

    //create an unsigned short initialized with the result of 
    //length and width mulitpled. Assign it to area
    unsigned short area = length * width;

    cout << "Length: " << length << "\n";
    cout << "Width: " << width << "\n";
    cout << "Area: " << area << "\n";

    return 0;
}