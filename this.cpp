#include<iostream>
using namespace std;

class Rectangle{
    int l,b,h;
public:
    void setDimension(int l, int b, int h){
        this->l=l,this->b=b,this->h=h;
    }
    void showDimension(){
        cout<<"L ="<<this->l<<" "<<"B ="<<b<<" "<<"H ="<<h<<endl;
    }
};

int main(){
    Rectangle r;
    r.setDimension(2,3,4);
    r.showDimension();
}


