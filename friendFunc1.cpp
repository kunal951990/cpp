# include<iostream>
using namespace std;

class Complex{
private:
    int a,b;
public:
    void set_number(int x,int y){a=x; b=y;}
    void display(){cout<<a<<" "<<b<<endl;}
    friend void func(Complex);                  //friend function needs to decleared by using keyword friend in class.
};
void func(Complex c){                   // while defining no need to use member specifier as friend function is not a member function.
    cout<<"Sum is :"<<c.a+c.b<<endl;
}
int main(){
    Complex c1,c2,c3;
    c1.set_number(5,4);
    func(c1);                       // It cannot access private members directly but with help of object.
}
