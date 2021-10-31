//demonstrates an object with a dynamically allocated data member

#include <iostream>
#include <string>

using namespace std;

class Critter
{
    public:
        Critter(const string& name = " ", int age = 0);
        ~Critter(); //deconstructor prototype
        Critter(const Critter& c); // copy constructor
        Critter& Critter::operator=(const Critter& c); 
        //overload assignment op

        void Greet() const;
    
    private:
        string* m_pName;
        int m_Age;
};

Critter::Critter(const string& name, int age)
{
    cout << "Constructor called\n";
    m_pName = new string(name);
    m_Age = age;
}

Critter::~Critter() //deconstructor def
{
    cout << "Deconstructor called.\n";
    delete m_pName;
}

Critter::Critter(const Critter& c)
{
    cout << "Copy Constructor called.\n";
    m_pName = new string(*(c.m_pName));
    m_Age = c.m_Age;
}

Critter& Critter::operator=(const Critter& c) //overload
{
    cout << "Overloaded Assginement Operator called\n";
    if (this != &c)
    {
        delete m_pName;
        m_pName = new string(*(c.m_pName));
        m_Age = c.m_Age;
    }
    return *this;
}

void Critter::Greet() const
{
    cout << "I'm " << *m_pName << " and I'm " << m_Age << " years old. ";
    cout << "&m_pName: " << &m_pName << endl; 
}

void testDeconstructor();
void testCopyConstructor(Critter aCopy);
void testAssignmentOp();

int main()
{
    testDeconstructor();
    cout << endl;

    Critter crit("Poochie", 5);
    crit.Greet();
    testCopyConstructor(crit);
    crit.Greet();
    cout << endl;

    testAssignmentOp();

    return 0;
}

void testDeconstructor()
{
    Critter toDestroy("Rover", 3);
    toDestroy.Greet();
}

void testCopyConstructor(Critter aCopy)
{
    aCopy.Greet();
}

void testAssignementOp()
{
    Critter crit1("crit1", 7);
    Critter crit2("crit2", 9);
    crit1 = crit2;
    crit1.Greet();
    crit2.Greet();
    cout << endl;

    Critter crit3("crit", 11);
    crit3 = crit3;
    crit3.Greet();
}