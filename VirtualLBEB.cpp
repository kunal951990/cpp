#include<iostream>
using namespace std;

class A{
public:
    void fun1(){}
    virtual void fun2(){}
    virtual void fun3(){}
    virtual void fun4(){}
};
class B{
public:
    void fun1(){}
    void fun2(){}
    void fun4(int x){}
};

int main(){
    A *p,ob1; //For class A, Pointer and Object creation
    p=&ob1;   // Assigning address of Object of same class to same class pointer.
    p->fun1(); //Early Binding: No virtual keyword is used so, early binding on the type of pointer.
    p->fun2(); //Late Binding:
    p->fun3(); //Late Binding
    p->fun4(); //late Binding
    p->fun4(4); //Early Binding: since the type of pointer is class A, it will search void fun4(int x) in class A, and error will be generated.
}

    A *p; //For class A, Pointer created.
    B ob2; //Object creation for class B
    p=&ob2; // Assigning address of Object of class B to class A pointer.
    p->fun1(); //Early Binding: No virtual keyword is used so, early binding on the type of pointer.
    p->fun2(); //Late Binding:
    p->fun3(); //Late Binding
    p->fun4(); //late Binding
    p->fun4(4); //Early Binding: since the type of pointer is class A, it will search void fun4(int x) in class A, and error will be generated here also.
}
