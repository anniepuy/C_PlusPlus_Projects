#include <iostream>
using std::cout;

int add(int x, int y, int z)
{
    //add the numbers x and y together to return the sum
    cout << "Running calculator ...\n";
    return (x+y+z);
}

int main()
{
    /* this program calls an add() function to add two different
    sets of numbers together and display the results.  The add()
    function doesn't do anything unless it is called by a line in the 
    main() function */
    cout << "What is X + Y + Z?\n";
    cout << "The sum is " << add(867, 5309, 648) << "\n\n";
    cout << "THIS WORKED?\n";
    cout << "The sum is " << add(777, 9311, 458) << "\n\n";
    return 0;
}