#include <iostream>

using namespace std;

int findArea (int length, int width); // function protoype

int main()
{
    int length;
    int width;
    int area;

    cout << "\nHow long is your yard? ";
    cin >> length;
    cout << "\nHow wide is your yard? ";
    cin >> width;

    area = findArea(length, width);

    cout << "\nYour yard is ";
    cout << area;
    cout << " square feet\n\n";
    return 0;
}

//function declaration / definition

int findArea(int l, int w)
{
    return l * w;
}