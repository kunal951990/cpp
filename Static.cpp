#include<iostream>
using namespace std;

class A
{
public:
    static int x;
    static void setX(int a)
    {
        x=a;
        cout<<"Static Method"<<endl;
        cout<<x<<endl;
    }
};
class B: public A
{};

int A::x=5;
int main()
{
    A p;
    B k;
    //cout<<A::x<<endl;
    A::setX(10);
    p.setX(15);
    k.setX(20);
    cout<<k.x<<endl;
    return 0;
}
