#include<iostream>
using namespace std;

class A
{
    int a;
public:
    static int b;
public:
    A()
    {
        a=20;
        cout<<"a "<<a;
    }
};
int A:: b=20;
int main()
{
    A a1;
    cout<<endl;
    cout<<A::b;
    return 0;
}
