#include <iostream>

using namespace std;

int main()
{
    int score;
    cout << "Enter your score: ";
    cin >> score;

    if(score >= 1000)
    {
        cout << "You score 1000 or more. Impressive!\n";
    }
    else if(score >= 500)
    {
        cout << "You score 500 or more. Nice.\n";
    }
    else if(score >=250)
    {
        cout << "You score 250 or more. Decent.\n";
    }
    else
    {
        cout << "You score less than 250. Nothing to brag about.\n";
    }
    return 0;
    
}