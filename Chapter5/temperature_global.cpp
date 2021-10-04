#include <iostream>

using namespace std;

void convert();

float fahrenheit;
float celsius;

int main()
{
    cout << "Please enter the temperature in Fahrenheit: ";
    cin >> fahrenheit;
    convert();
    cout << "\nHere is your temperature in celsisus: ";
    cout << celsius << "\n";
    return 0;
}

//function to convert fahrenheit to celsius
void convert()
{
    celsius = ((fahrenheit - 32) * 5) / 9;
};