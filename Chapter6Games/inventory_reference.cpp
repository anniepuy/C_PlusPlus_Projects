//inventory reference
//demonstrates returning a reference

#include <iostream>
#include <string>
#include <vector>

using namespace std;
//returns a reference to a string
string& refToElement(vector<string>& inventory, int i);

int main()
{
    vector<string> inventory;
    inventory.push_back("sword");
    inventory.push_back("cup");
    inventory.push_back("numchuks");

    //displays string that the returned reference refers to 
    cout << "Sending the returned reference to cout:\n";
    cout << refToElement(inventory, 0) << "\n\n";

    //assigns one reference to another -- inexpensive assignment
    cout << "Assigning the returned reference to another reference.\n\n";
    string& rStr = refToElement(inventory, 1);
    cout << "Sending the new reference to cout: \n\n";
    cout << rStr << "\n\n";

    //copies a string object -- expensive assignment
    cout << "Assigning the returned reference to a string object.\n\n";
    string str = refToElement(inventory, 2);
    cout << "Sending the new reference to cout: \n\n";
    cout << str << "\n\n";

    //altering the string object through a returned reference
    cout << "Altering an object through a returned reference.\n";
    rStr = "Healing Potion";
    cout << "Sending the new altered object to cout: \n";
    cout << inventory[1] << endl;

    return 0;
}

//returns a reference to a string
string& refToElement(vector<string>& vec, int i)
{
    return vec[i];
}