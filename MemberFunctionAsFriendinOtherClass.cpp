#include<iostream>
using namespace std;

class A{
public:
    void func1(){
        cout<<"func1"<<endl;
    }
    void func2(){
        cout<<"func2"<<endl;
    }
};
class B{
    friend class A;    // If we want all function of class A to be friend function in Class B, then we can use friend class A.
    //friend void A::func1();
    //friend void A::func2();
};
int main(){
    A a;
    B b;
    a.func1();
    //func1();
}
