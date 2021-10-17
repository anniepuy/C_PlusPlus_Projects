#include <iostream>

using namespace std;

//introduction of this. to specifically call an object

class Rectangle 
{
    public:
        Rectangle();
        ~Rectangle();
        void SetLength(int length) 
            {
                this->itsLength = length;
            }
        int GetLength() const   
            {
                return this->itsLength;
            }
        void SetWidth(int width)
            {
                itsWidth = width;
            }
        int GetWidth() const    
            {
                return itsWidth;
            }
    private: 
        int itsLength;
        int itsWidth;
};

Rectangle::Rectangle()
{
    itsWidth = 5;
    itsLength = 10;
}

Rectangle::~Rectangle()
{}

int main()
{
    Rectangle theRect;
    cout << "theRect is " << theRect.GetLength()
        << " feet long." << endl;
    cout << "theRect is " << theRect.GetWidth()
        << " feet wide." << endl;
    
    theRect.SetLength(20); //takes the object "theRect" and assigs 20 to the SetLength
    theRect.SetWidth(10);
    cout << "theRect is " << theRect.GetLength()
        << " feet long." << endl;
    cout << "theRect is " << theRect.GetWidth()
        << " feed long." << endl;
    return 0;
}