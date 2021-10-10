#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char string1[] = "Hello my little friend!";
    char string2[80];

    strcpy(string2, string1);

    cout << "String1:  " << string1 << endl;
    cout << "String2: " << string2 << endl;
    return 0;
}
