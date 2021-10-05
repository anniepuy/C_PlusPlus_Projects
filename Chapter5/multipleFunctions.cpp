#include <iostream>

using namespace std;

int total(int paycheck, int tips);
int total(float wine, int spending);


int main()
{
    int paycheck = 2500;
    int tips = 4;
    float wine = 50.6;
    int spending = 300;
    int budget;

    cout << "Your paycheck is: $" << paycheck << ".\n\n";
    cout << "You have $" << tips << " as a bonus.\n\n";
    budget = total(paycheck, tips);
    cout << "Togehether you have $" << budget << " dollars.\n\n";

    cout << "You have spent $" << wine << " on wine.\n\n";
    cout << "And you have spent $" << spending << " on random stuff.\n\n";
    budget = total(wine, spending);
    cout << "Together you have spent $" << budget << " this past month.\n\n";

}

int total (int paycheck, int tips)
{
    return (paycheck + tips);
}

int total(float wine, int spending)
{
    return (wine + spending);
}