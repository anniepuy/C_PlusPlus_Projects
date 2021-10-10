#include <iostream>

using namespace std;

int main()
{
    int production[] = { 10500, 1600, 5800, 4500, 13900};
    for (int& year : production)
    {
        cout << "Output: " << year << endl;
    }
    return 0;
}