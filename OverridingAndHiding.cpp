#include<iostream>
using namespace std;

class Car{
public:
    void shiftGear(){cout<<"Car"<<endl;}
    void fun(){cout<<"Car Fun"<<endl;}
};
class SportsCar:public Car{
public:
    void shiftGear(){cout<<"Sports"<<endl;}
    void fun(int a){cout<<"SportsCar Fun"<<endl;}
};
int main(){
    SportsCar s;
    s.shiftGear();
    s.fun(7);
  /*s.fun();*/  // |17|error: no matching function for call to 'SportsCar::fun()'| => Method hiding not able to check base class fun()
}               // The reason is if compiler will find same name function in child class, it wont look to base class.

