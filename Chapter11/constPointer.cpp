#include <iostream>

using namespace std;

/* const int *pOne 
-Creates a pointer to a const integer whose value cannot change.
int * const pTwo
- Creates a constant pointer to an interger. Interger can change, but pTwo cannot point
to anything else
const int * const pThree
- Create a const pointer to a const interger. The value assigned to the pointer cannot change
and the pointer cannot be assigned to point to anything else.
- adding const keywork to a member function, limits the data in the function to always be the same. */


class Rectangle //creates the clas
{
    public: 
        Rectangle();
        ~Rectangle();
        void SetLength(int length) 
            {
                itsLength = length;
            }
        int GetLength() const  
            {
                return itsLength;
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

Rectangle::Rectangle():
itsWidth(5), itsLength(10)
{}

Rectangle::~Rectangle()
{}

int main()
{
    Rectangle* pRect = new Rectangle;
    const Rectangle *pConstRect = new Rectangle;
    Rectangle * const pConstPtr = new Rectangle;

    cout << "pRect width: "
        << pRect->GetWidth() << " feet\n";
    cout << "pConstRect width: "
        << pConstRect->GetWidth() << " feet\n";

    cout << "pConstPtr width: "
        << pConstPtr->GetWidth() << " feet\n";
    
    pRect->SetWidth(10);
    //pConstRect->SetWidth(10);
    pConstPtr->SetWidth(10);

    cout << "pRect width: "
        << pRect->GetWidth() << " feet\n";
    cout << "pConstRect width: "
        << pConstRect->GetWidth() << " feet\n";
    cout << "pConstPtr width: " 
        << pConstPtr->GetWidth() << " feet\n";
    return 0;
}