#include<iostream>
using namespace std;

class A{
private:
    int a;
public:
    void setData(int x){a=x;}
};
class B:private A{
public:
    void setValue(int k){
        setData(k);
    }
};
int main(){
    B b;
    b.setValue(2);
}
