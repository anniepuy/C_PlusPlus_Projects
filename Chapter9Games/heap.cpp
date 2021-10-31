//adding items to the heap

#include <iostream>

using namespace std;

int* intOnHeap(); // returns an int on the heap
//void leak1(); creates a memory leak - not used
//void leak2(); creates another memory leak - not used

int main()
{
    int* pHeap = new int;
    *pHeap = 10;
    cout << "*pHeap: " << *pHeap << "\n\n";

    int* pHeap2 = intOnHeap();
    cout << "*pHeap2: " << *pHeap2 << "\n\n";

    cout << "Freeing memory pointed to the pheap.\n\n";
    delete pHeap;

    cout << "Freeing up memory to the pHeap2:\n\n";
    delete pHeap2;
    
    //get rid of dangline pointers
    pHeap = 0;
    pHeap2 = 0;

    return 0;
}

int* intOnHeap()
{
    int* pTemp = new int(20);
    return pTemp;
}

/* //void leak1()
{
    int* drip1= new int(30);
}

void leak2()
{
    int* drip2 = new int(50);
    drip2 = new int(100);
    delete drip2;
} */