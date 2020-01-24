// Non-premitive to Non-primitive type conversion by help of constructor.
#include<iostream>
using namespace std;

class Item{
private:
    int a,b;
public:
    void setData(int x, int y){a=x;b=y;}
    void showData(){cout<<a<<" "<<b<<endl;}
    int returnA(){return a;}
    int returnB(){return b;}
};
class Product{
private:
    int m,n;
public:
    void setData(int x, int y){m=x;n=y;}
    void showData(){cout<<m<<" "<<n<<endl;}
    Product(){}
    Product(Item i){m=i.returnA();n=i.returnB();}
};
int main(){
    Item i1;
    Product p1;
    i1.setData(3,4);
    p1=i1;
    p1.showData();
    return 0;
}
