#include <iostream>

using namespace std;

int main()
{
    //create an pos/or neg variable
    unsigned int score = 5000;

    //alterning the value of the variable
    score = score + 100;
    cout << "score: " << score << endl;

    //altering the value using combined assignment operators
    score += 100;
    cout << "New score: " << score << endl;

    score /= 2;
    cout << "Score divided by 2: " << score << endl;

    //using increment operators
    int lives = 3;
    lives++;
    cout << "Lives: " << lives << endl;

    lives = 3;
    int bonus = ++lives * 10;
    cout << "lives, bonus = " << lives << ", " << bonus << endl;

    //interger wrap around
    score = 4294967295;
    cout << "\nscore: " << score << endl;
    ++score;
    cout << "score: " << score << endl;

    return 0;
}