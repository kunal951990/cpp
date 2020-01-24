# include<iostream>
using namespace std;

class Integer{
private:
    int x;
public:
    void setData(int a){
        x=a;
    }
    void showData(){
        cout<<"X : "<<x<<endl;
    }
    Integer operator ++(){                  //Pre Increment wont need any sign as parameter for compiler to detect about it.
        Integer temp;
        temp.x=++x;
        return temp;
    }
        Integer operator ++(int){           //Post increment need int as parameter for compile to distinguish with Pre increment.
        Integer temp;
        temp.x=x++;
        return temp;
    }
};

int main(){
    Integer i1,i2,i3;
    i1.setData(3);
    i1.showData();
    i2=++i1;
    i3=i1++;
    i2.showData();
    i3.showData();
}
