#include<iostream>
using namespace std;

class A{
public:
    virtual void fun()=0; // This is pure virtual function or "do nothing" function.
};
class B:public A{
public:
    void fun(){}; // Overriding pure virtual function in child class.
};

int main(){
    /*A a;*/ // It will generate error, as Class A is abstract class.
    B b;
}
