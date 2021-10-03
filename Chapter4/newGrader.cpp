#include <iostream>

using namespace std;

int main()
{
    int grade;
    cout << "Enter a grade (1-100: ";
    cin >> grade;

    if (grade >= 70)
    {
        if (grade >= 90)
        {
            cout << "\nYou've got an A! Great job!\n";
            return 0;
        }
        if (grade >= 80)
        {
            cout << "\nYou've got a B! Great job!\n";
            return 0;
        }
        cout << "\nYou've got a C. Perfectly adequate!\n";
    }
    else
        cout << "\nYou've got an F. Better luck next time.\n";

    return 0;
    
}