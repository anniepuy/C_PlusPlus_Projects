//creates a story based on user input. 
//uses three functions

#include <iostream>
#include <string>

using namespace std;

string askText(string prompt);
int askNumber(string prompt);
void tellStory(string name, string noun, int number, string bodyPart, string verb);

int main()
{
    cout << "Welcome to Mad Lib.\n";
    cout << "Answer the following questions to help create a new story.\n";

    string name = askText("Please enter a name: ");
    string noun = askText("Please enter a noun: ");
    int number = askNumber("Please enter a number: ");
    string bodyPart = askText("Please provide a bodypart: ");
    string verb = askText("Please enter a verb: ");

    tellStory(name, noun, number, bodyPart, verb);

    return 0;
}

string askText(string prompt)
{
    string text;
    cout << prompt;
    cin >> text;
    return text;
}

int askNumber(string prompt)
{
    int num;
    cout << prompt;
    cin >> num;
    return num;
}

void tellStory(string name, string noun, int number, string bodyPart, string verb)
{
    cout << "\nHere is your story:\n";
    cout << "The famous explorer ";
    cout << name;
    cout << "had nearly given up all hope to find \n";
    cout << "The Lost City of ";
    cout << noun << ".\n";
    cout << "But one day, the ";
    cout << noun;
    cout << " found the explorer ";
    cout << name << ".\n";
    cout << "You where surrounded by ";
    cout << number << " angry ";
    cout << noun;
    cout << "s, a tear came to ";
    cout << name << "'s ";
    cout << bodyPart << ".\n";
    cout << "After all of this time, the quest was finally over. ";
    cout << noun << "\n";
    cout << "promptly devoured ";
    cout << name << ".";
    cout << " The moral of the story?  Be careful what you ";
    cout << verb;
    cout << " for.";
}

