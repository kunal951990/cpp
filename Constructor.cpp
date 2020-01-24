# include<iostream>
using namespace std;

class Complex{
private:
    int a,b;
public:
    Complex(){cout<<"Default Constructor"<<endl;}
    Complex(int i){
        a=i;
        b=0;
        cout<<"Parametrized Const 1"<<endl;
        }
    Complex(int j, int k){
        a=j;
        b=k;
        cout<<"Parametrized Const 2"<<endl;
    }
    Complex(Complex &c){
        a=c.a;
        b=c.b;
        cout<<"Copy Constructor is Called"<<endl;
    }
    void display(){
        cout<<a<<" "<<b<<endl;
    }
};

int main(){
    Complex c1,c2(5),c3(3,4);
    Complex c5=c3;
    c5.display();
}
