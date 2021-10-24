#include <iostream>

using namespace std;

//using operator overload to use a specific operator with an object of the class 
//this is done via memeber function written like this:
//returntype operatorsymbol(paramater list){ body of overloaded member function 

class Counter 
{
    public:
        Counter();
        ~Counter(){}
        int getValue() const { return value; }
        void setValue(int x) { value = x; }
        void increment() { ++value; }
        const Counter& operator++();

    private:
        int value;
};

Counter::Counter():
value(0)
{}

const Counter& Counter::operator++()
{
    ++value;
    return *this;
}

int main()
{
    Counter c;
    cout << "The value of c is " << c.getValue() << endl;
    c.increment();
    cout << "The value of c is " << c.getValue() << endl;
    //++c;
    c.increment();
    cout << "The value of c is " << c.getValue() << endl;
    Counter a = ++c;
    cout << "The vlaue of a: " << a.getValue();
    cout << " and c: " << c.getValue() << endl;
    return 0;
}