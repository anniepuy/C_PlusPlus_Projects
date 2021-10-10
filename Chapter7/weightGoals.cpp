#include <iostream>

using namespace std;

int main()
{
    float goal[4];
    goal[0] = .9;
    goal[1] = .75;
    goal[2] = .5;
    goal[3] = .25;
    float weight, target;

    cout << "Enter current weight: ";
    cin >> weight;
    cout << "\nEnter goal weight: ";
    cin >> target;
    cout << endl;

    for (int i = 0; i < 4; i++)
    {
        float loss = (weight - target) * goal[i];
        cout << "Goal " << i << ": ";
        cout << target + loss << endl;
    }

    return 0;
}