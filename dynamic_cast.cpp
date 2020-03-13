#include<iostream>
using namespace std;

class Base
{
    virtual void print(){cout<<"Base";}  // must needed one virtual function because dynamic_cast decides on the basis of run time data.
};
class Derived1 : public Base
{
    void print(){cout<<"Derived1";}
};
class Derived2 : public Base
{
    void print(){cout<<"Derived2";}
};

int main()
{
    Derived1 d1;
    Base* bd1 = dynamic_cast<Base*>(&d1);

    Derived2* dp2 = dynamic_cast<Derived2*>(bd1);   // It will give nullptr, null pointer as wrong down casting.
    Derived1* dp1 = dynamic_cast<Derived1*>(bd1);  //  This is correct down casting.

    if(dp2==nullptr)
        cout<<dp2;
    else
        cout<<dp2;
    return 0;
}
