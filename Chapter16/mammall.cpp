//demonstrating inheritance with classes

#include <iostream>

using namespace std;

enum { YORKIE, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB };

class Mammal
{
    public:
        //constrcutors
        Mammal(): age(2), weight(5) {}
        ~Mammal(){}

        //accessors
        int getAge() const { return age; }
        void setAge(int newAge) { age = newAge;}
        int getWeight() const { return weight; }
        void setWeight (int newWeight) { weight = newWeight; }

        //other member functions
        void speak() const { cout << "Mammal sound!\n";}
        void sleep() const { cout << "Shhh. I'm sleeping here.\n";}

    protected:
        int age;
        int weight;
};

class Dog : public Mammal
{
    public:
        //constructors
        Dog(): breed(YORKIE) {}
        ~Dog() {}

        //accessors
        BREED getBreed() const { return breed; }
        void setBreed(BREED newBreed) { breed = newBreed; }

        //other member functions
        void wagTail() { cout << "Tail wagging..\n";}
        void begForFood() { cout << "Begging for food..\n";}
    private:
        BREED breed;
};

int main()
{
    Dog fido;
    fido.speak();
    fido.wagTail();
    cout << "Fido is " << fido.getAge() << " years old\n";
    return 0;
}