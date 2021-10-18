#include <iostream>

using namespace std;

//using pointers to make a value swap
void swap(int *x, int *y);

int main()
{
    int x = 5, y = 10;

    cout << "Main. Before swap, x: " << x << " y: " << y ,<< endl;

    swap(&x, &y);
    cout << "Main. After swap with pointers. X: " << x << " Y: " << y << endl;
    return 0;
}

void swap(int *px, int *py)
{
    int temp;
    cout << "Swap. Before swap, *px: " << *px << " *py: " << *py << endl;

    temp = *px;
    *px = *py;
    *py = temp;

    cout << "Swap. After swap, *px: " << *px << " *py: " << *py << endl;
}