#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    const int GOLD_PIECES = 900;
    int adventurers, killed, survivors;
    string leader, purpose; 

    //get the information
    cout << "Welcom to Lost Fortune\n";
    cout << "Please enter the following information for your personalized adventure\n";

    cout << "Enter a number: ";
    cin >> adventurers;

    cout <<"Enter a a number, smaller than the first: ";
    cin >> killed;

    survivors = adventurers - killed;

    cout <<"Enter your last name: ";
    cin >> leader;

    cout <<"Enter your favorite food: ";
    cin >> purpose;

    //tell a story

    cout << "\nA brave young group of " << adventurers << ", set out on a quest for " << purpose << ".\n";
    cout <<"The " << adventurers << " knew the " << purpose << " where the lost treasure of the Anient Dwarves.\n";
    cout << "The group was lead by that lengendary rogue. " << leader << ".\n";
    cout << "\nAlong the way, a band of marauding ogres ambushed the party";
    cout << ", and the ogres were defeated, but at a cost.\n";
    cout << "Of the adventurers, " << killed << " were vanquished. ";
    cout << "Leaving just " << survivors << " in the group.\n";

    cout << "\nThe party was about to give up all hope. ";
    cout << "But while laying the deceased to rest, \n";
    cout << "they stumbled upon the burried fortune. ";
    cout << "So the adventurers split the " << GOLD_PIECES << " gold pieces.\n";
    cout << leader << " held on to the extra " << (GOLD_PIECES % survivors);
    cout << "pieces to keep things fair of course.\n";

    return 0;
}