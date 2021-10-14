#include <iostream>

using namespace std;

int main()
{
    int myAge; //a variable
    int *pAge = nullptr; //creating the pointer 

    myAge = 5;
    pAge = &myAge; //assiging the pointer to myAge
    cout << "myAge: " << myAge << "\n";
    cout << "*pAge: " << *pAge << "\n";

    cout << "Assigning *pAge to 7\n";
    *pAge = 7;
    cout << "*pAge: " << *pAge << "\n";
    cout << "myAge: " << myAge << "\n";

    cout << "Assigning *pAge to 9\n";
    *pAge = 9;
    cout << "*pAge: " << *pAge << "\n";
    cout << "myAge: " << myAge << "\n";

    cout << "Assigning *pAge to 10\n";
    *pAge = 10;
    cout << "myAge: " << myAge << "\n";
    cout << "*pAge: " << *pAge << "\n";

    cout << "Assigning myAge to 20\n";
    myAge = 20;
    cout << "myAge: " << myAge << "\n";
    cout << "*pAge: " << *pAge << "\n";

    return 0;
}