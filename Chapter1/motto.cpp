#include <iostream>
//the # tells the processor this is a preprocessor directive
//<iostream> tells the processor to include the library for input/output

int main()
//when a functions does not return a number, it is a 'void'
{
    std::cout << "Hello!\n";
    //std is for standard
    //cout is for c output
    //cint is for c input
    //<< is the display operator
    return 0;
    //always return zero. other numbers cause failures
    //return statement causes a function to exit
}