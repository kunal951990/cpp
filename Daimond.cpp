#include<iostream>
using namespace std;

class A
{
private:
    virtual void print(){cout<<"Class A"<<endl;}
};
class B:public A
{
public:
    void print(){cout<<"Class B"<<endl;}
};

int main()
{
    A *ptr = new B;
    B *b = dynamic_cast<B*>(ptr);
    b->print();
    return 0;
}
