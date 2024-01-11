// program to demonstrate use of method overriding
#include <iostream>
using namespace std;

class Base
{
public:
    void generate()
    {
        cout << "Base class" << endl;
    }
};

class Derive : public Base
{
public:
    void generate()
    {
        cout << "Derive class" << endl;
    }
};

int main()
{
    Derive d1;
    d1.generate();
    d1.Base::generate();
    return 0;
}
