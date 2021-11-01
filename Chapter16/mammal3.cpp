//demonstrating constructors and deconstructors with derived classes

#include <iostream>

using namespace std;

enum BREED { YORKIE, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB};

class Mammal
{
    public:
        //constructors
        Mammal();
        ~Mammal();

        //accessors
        int getAge() const { return age; }
        void setAge(int newAge) { age = newAge; }
        int getWeight() const { return weight; }
        void setWeight(int newWeight) { weight = newWeight; }

        // other member functions
        void speak() const { cout << "Mammal sound!\n"; }
        void sleep() const { cout << "I am tired.\n"; }

    protected:
        int age;
        int weight;
};

class Dog : public Mammal
{
    public:
        //constructors
        Dog();
        ~Dog();

        //accessors
        BREED getBreed() const { return breed; }
        void setBreed(BREED newBreed) { breed = newBreed; }

        //other member functions
        void wagTail() { cout << "Tail wagging..\n"; }
        void begForFood() { cout << "Begging for food...\n"; }

    private:
        BREED breed;
};

Mammal::Mammal():
age(3),
weight(5)
{
    cout << "Mammal constructor...\n";
}

Mammal::~Mammal()
{
    cout << "Mammal deconstructor...\n";
}

Dog::Dog() :
breed(YORKIE)
{
    cout << "Dog constructor...\n";
}

Dog::~Dog()
{
    cout << "Dog deconstructor...\n";
}

int main()
{
    Dog fido; //create dog
    fido.speak();
    fido.wagTail();
    cout << "Fido is .. " << fido.getAge() << " years old.\n";
    return 0;
}