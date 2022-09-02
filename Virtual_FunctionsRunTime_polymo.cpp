#include <iostream>
using namespace std;
class base
{
public:
    int var_base = 1;
    virtual void display()
    {
        cout << "displaying base class variable var_base " << var_base << endl;
    }
};
class derived : public base
{
public:
    int var_derived = 2;
    void display()
    {
        cout << "displaying base class variable var_base " << var_base << endl;

        cout << "displaying base class variable var_derived " << var_derived << endl;
    }
};
int main()
{
    base *base_classpointer;
    base obj_base;
    derived obj_derived;
    base_classpointer = &obj_derived;
    //base_classpointer->var_base;
    //base_classpointer->var_derived;  // giving error bcz its only pointing the base class as its base class pointer

    base_classpointer->display();


    return 0;
}
