# include<iostream>
using namespace std;

class Complex{
private:
    int a,b;
public:
    void set_number(int x,int y){
        a=x;
        b=y;
    }
    void display(){
        cout<<a<<" "<<b<<endl;
    }
    Complex add(Complex c){
        Complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }
};

int main(){
    Complex c1,c2,c3;
    c1.set_number(3,4);
    c2.set_number(5,8);
    c3 = c1.add(c2);
    c3.display();
    return 0;
}
