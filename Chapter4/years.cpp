#include <iostream>

using namespace std;

int main() 
{
    int year = 2016;
    cout << "The year " << ++year << " passes.\n";
    cout << "The year " << ++year << " passes. \n";
    cout << "The year " << ++year << " passes.\n";

    cout << "\nIt is now " << year << ".";
    cout << " Have the Chicago Cubs won the World Series Yet?\n";

    cout << "The year " << year++ << " passes.\n";
    cout << "The year " << year++ << " passes. \n";
    cout << "The year " << year++ << " passes.\n";

    cout<< "\nSurely the Cubs have won by now!\n";
    cout << "\nNope. They have not. Sorry, Roger Cagenhead. \n";
    return 0;
}