#include <iostream>

using namespace std;

int main()
{
    cout << "Side options for your Salmon Dinner Plate.\n";
    cout << "Please pick one side:\n";
    cout << "1 - Mashed Potatoes\n";
    cout << "2 - Asparagus\n";
    cout << "3 - Rice Pilaf\n";
    
    int choice;
    cout << "Choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "You picked mashed potatoes! Great choice.\n";
            break;
        case 2:
            cout << "You picked asparagus. You must want to feel lean.\n";
            break;
        case 3:
            cout << "You picked rice pilaf. Delicous with a touch of butter.\n";
            break;
        default:
            cout << "Well, we don't offer custom sides.  Are you sure do not want a side?\n";
    }
    return 0;
}