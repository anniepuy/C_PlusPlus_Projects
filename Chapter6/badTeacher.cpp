#include <iostream>

using namespace std;

int main()
{
    char grade;
    cout << "Enter a letter grade (ABCDF) : ";
    cin >> grade;

    switch(grade)
    {
        case 'A':
            cout << "Excellent job!\n";
            break;
        case 'B':
            cout << "You definitely tried. Try a different method of studying next time.\n";
            break;
        case 'C':
            cout << "This material must have been difficult for you. Reviewing material is importnat.\n";
            break;
        case 'D':
            cout << "Try not to assume this will be easy. Study more.\n";
            break;
        case 'F':
            cout << "I know you can learn this if you try. Don't give up.\n";
            break;
        default:
            cout << "That's not even a grade. Why are you here?\n";
            break;
    }
    return 0;
}