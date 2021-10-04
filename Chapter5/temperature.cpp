#include <iostream>

using namespace std;

float convert(float);
//creates the local variable that takes in one argument - a float

int main()
{
    float fahrenheit; 
    //assigns the argument fahrenheit to the float 
    float celsius;
    //assigns the float l-value to the function convert

    cout << "Please enter in your tempterture in Fahrenheit: ";
    cin >> fahrenheit;
    celsius = convert(fahrenheit);

    cout << "\nYour temperature in Celsius is: ";
    cout << celsius << "\n";
    return 0;
}

//function to convert Fahrenheit to Celsisu
float convert(float fahrenheit)
{
    float celsius;
    celsius = ((fahrenheit - 32) * 5) / 9;
    return celsius;
}