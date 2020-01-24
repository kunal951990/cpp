# include <iostream>
using namespace std;
class B;                // formal declaration so that compile can understand that B is function while observing func in class A.
class A{
private:
    int a;
public:
    friend void func(A,B);
};
class B{
private:
    int b;
public:
    friend void func(A,B);
};
void func(A o1, B o2){              // This is the use we can access private members of different classes with friend function.
    cout<<"Sum is :"<<o1.a+o2.b<<endl;
}
int main(){
    A obj1;
    B obj2;
    func(obj1,obj2);
}
