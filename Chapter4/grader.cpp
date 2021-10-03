#include <iostream>

using namespace std;

int main()
{
    int grade;
    cout << "Enter a grade (1-100): ";
    cin >> grade;

    if (grade >= 70)
        cout << "\nYou passed!\n";
    else
        cout << "\nTry again next time.\n";
    return 0;
}