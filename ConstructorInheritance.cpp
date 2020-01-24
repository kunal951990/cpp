#include<iostream>
using namespace std;

class A{
public:
    A(){cout<<"Base Class"<<endl;}
};
class B:private A{
public:
    B(){cout<<"Child Class"<<endl;}
};

int main(){
    B a;
}
