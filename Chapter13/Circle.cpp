#include <iostream>

//using constant expression to return a non void type

using namespace std;

//get an approximate value of PI
constexpr getPi() {
    return (double) 22 / 7;
}
//error returno n constexpr and not sure why

int main()
{
    float radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    //the area equals PI * the radius squared
    double area = getPi() * (radius * radius);

    cout << "\nCircle's area: " << area << endl;

    return 0;
}