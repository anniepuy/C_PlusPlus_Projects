#include <iostream>

using namespace std;

int main()
{
    int counter = 0;
    int multiples = 0;

    while (multiples < 19)
    {
        counter++;
        if (counter % 15 != 0)
            continue;
        cout << counter << " ";
        multiples++;
    }

    cout << "\n";
    return 0;
}