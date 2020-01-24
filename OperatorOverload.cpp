# include<iostream>
using namespace std;

class Complex{
private:
    int a,b;
public:
    void set_number(int x,int y){
        a=x; b=y;
    }
    void display(){
        cout<<a<<" "<<b<<endl;
    }
    Complex operator +(Complex c){     //Binary operator overloading, it will take one argument also.
        Complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }
        Complex operator -(){            //Unary operator overloading, it wont take any argument.
        Complex temp;
        temp.a=-a;
        temp.b=-b;
        return temp;
    }
};

int main(){
    Complex c1,c2,c3,c4;
    c1.set_number(3,4);
    c2.set_number(5,6);
    c3=c1+c2;
    c4=-c3;
    c3.display();
    c4.display();
    return 0;
}

