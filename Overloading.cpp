#include<iostream>
using namespace std;

class A
{
public:
    void showZ(){cout<<"Class A"<<endl;}
};
class B: public A
{
public:
    //void showZ(){cout<<"Class B..."<<endl;}
    void showZ(int a){cout<<"Class B"<<" "<<a<<endl;}
};

int main()
{
    A *x = new B;
    x->showZ(5);
    return 0;
}
