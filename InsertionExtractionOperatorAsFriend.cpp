#include<iostream>
using namespace std;

class Complex{
private:
    int a,b;
public:
    void setData(int x, int y){a=x;b=y;}
    void showData(){cout<<"a ="<<a<<" "<<"b ="<<b<<endl;}
    friend ostream& operator<<(ostream&,Complex&);
    friend istream& operator>>(istream&,Complex&);
};
ostream& operator<<(ostream &dout,Complex &C){
    cout<<"\na="<<C.a<<"\nb="<<C.b<<endl;
    return dout;
}
istream& operator>>(istream &din,Complex &C){
    cin>>C.a>>C.b;
    return din;
}

int main(){
    Complex c1;
    cout<<"\nEnter the Complex number: ";
    cin>>c1;
    cout<<c1;
    return 0;
}


