// Primitive to Non-premitive type conversion.
#include<iostream>
using namespace std;

class Complex{
private:
    int a,b;
public:
    void setData(int x, int y){a=x;b=y;}
    void showData(){cout<<a<<" "<<b<<endl;}
    Complex(int s){a=s;b=0;}
    Complex(){}
};
int main(){
    Complex c1;
    int z = 5;
    c1=z;
    c1.showData();
    return 0;
}
