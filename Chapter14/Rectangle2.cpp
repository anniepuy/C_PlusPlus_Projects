#include <iostream>

using namespace std;

class Rectangle
{
    public:
        Rectangle(int width, int height);
        ~Rectangle(){}
        void drawShape(int aWidth, int aHeight, bool useCurrentValue = false) const;
    private:
        int width;
        int height;
};

Rectangle::Rectangle(int aWidth, int aHeight)
{
    width = aWidth;
    height = aHeight;
}
void Rectangle::drawShape(
    int aWidth,
    int aHeight,
    bool useCurrentValue
) const
{
    int printWidth;
    int printHeight;

    if (useCurrentValue == true)
    {
        printWidth = width;
        printHeight = height;
    }
}
}