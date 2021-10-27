//using inline functions

#include <iostream>

int radiation(int health);

using namespace std;

int main()
{
    int health = 80;
    cout << "Your health is " << health << "\n\n";

    health = radiation(health);
    cout << "Your radiation exposure has limited your health. It is now: " << health << "\n\n";

    health = radiation(health);
    cout << "You've continued to be exposed. Now your health is: " << health << "\n\n";

    return 0;
}

inline int radiation(int health)
{
    return(health/2);
}