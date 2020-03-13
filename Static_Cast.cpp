#include<iostream>
#include<string.h>
using namespace std;


// 1. C type conversion is hard to find in code.
//int main()
//{
//    char c = 'k';
//
//    int *i = static_cast <int*> (&c);
//   // int i = static_cast <int>(c);
//    cout<<c<<" "<<i;
//    return 0;
//}


// 2. static_cast is used when we use conversion constructor or conversion operator.
//class Int{
//    int x;
//public:
//    Int(int a=0):x{a}{cout<<"Constructor is called.";}
////    operator string()
////    {
////        return x;
////    }
//};
//
//int main(){
//    Int obj(3);
//    obj = 20;
//    //string s = static_cast<string>(obj);
//    return 0;
//}

class Base{};

class Derived1 : public Base
{};

class Derived2 : public Base
{};

int main()
{
    Derived1 d1;
    Derived2 d2;
    Base* bptr1 = static_cast<Base*>(&d1);
    Base* bptr2 = static_cast<Base*>(&d2);

    Derived1* d1p = static_cast<Derived1*>(bptr2);  // this will get compiled which should not happen, its down casting, here we need dynamic casting.
    Derived2* d2p = static_cast<Derived2*>(bptr1);  // need dynamic casting, should not happen becs both objects are from different classes.

    return 0;
}
