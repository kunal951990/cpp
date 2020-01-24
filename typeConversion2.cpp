// Non-premitive to Primitive type conversion.
#include<iostream>
using namespace std;

class Complex{
private:
    int a,b;
public:
    void setData(int x, int y){a=x;b=y;}
    void showData(){cout<<a<<" "<<b<<endl;}
    operator int(){
        return(a);
    }
};
int main(){
    Complex c1;
    c1.setData(9,10);
    c1.showData();
    int z;
    z=c1;
    cout<<z<<endl;
    return 0;
}
