#include<iostream>
using namespace std;

class A
{
private:
    int a;
public:
    fun1(){}
    virtual ~A(){}
};
class B:public A
{
private:
    int b;
    int *k= new int;
public:
    fun2(){}
    ~B(){}
};
int main()
{
    A *p= new B;
    p->fun1();
    //p->fun2(); EB, so compiler wont find fun2() in Base Class.
    return 0;
} // When the scope of object is over, Base class destructor will be called,due to Early Binding.
 // In order to call child class constructor we have to do Late Binding, that's why we make base class destructor as virtual.
