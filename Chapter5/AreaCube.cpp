#include <iostream>

using namespace std;

int findArea(int length, int width = 20, int height = 12);
//the default function paramater has two default values.
//notice how the calculations are changed when
//the program is not provided with an assigned variable and uses the default

int main()
{
    int length = 100;
    int width = 50;
    int height = 2;
    int area;

    area = findArea(length, width, height); 
    //above calls all three assigned values to the variables
    cout << "First assigned area is: " << area << "\n\n";

    area = findArea(length, width);
    //above only uses two assigned values, height is not called 
    //therefore uses the default from the protopye
    cout << "Second assigned area is: " << area << "\n\n";

    area = findArea(length);
    //again, only one assigned variable is used
    cout << "Third area is: " << area << "\n\n";
    return 0;
}

int findArea(int length, int width, int height)
{
    return (length * width * height);
}