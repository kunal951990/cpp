#include<iostream>
using namespace std;

class A{
    int a;
public:
    A(int k){a=k;}
};
class B:public A{
    int b;
public:
    B(int x, int y):A(x)     //Compiler only create default constructor for Base Class, so if we are creating
    {                        // Parameterized constructor in base class, during creating child class object
        b=y;                // Base class default constructor will be called, but since compiler wont create
    }                       // any constructor in base class as already user have created one parameterized,
};                          // we have to create or we have to specify which one to call.
int main(){
    B k(3,4);
}
