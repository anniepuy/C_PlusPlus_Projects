//Guess my number game

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0))); // seed random number generator
    int secretNumber = rand() % 100 + 1; //random number between 1 and 100
    int tries = 0;
    int guess;
    cout << "\tWelcome to Guess My Number. Mu ha ha ha \n\n";

    do 
    {
        cout << "Enter a guess: ";
        cin >> guess;
        ++tries;

        if(guess > secretNumber)
        {
            cout << "Your number is too high.\n\n";
        }
        else if(guess < secretNumber)
        {
            cout << "This is too low!\n\n";
        }
        else
        {
            cout << "\nThat's it! The number is " << secretNumber << ". You've guessed my number in " << tries << " guesses!\n";
        }
    } while (guess!=secretNumber);
    return 0;

}