# include <iostream>
using namespace std;
int sum(int*,int*);

int main(){
    int a = 15;
    int b = 16;
    cout<<"Main"<<endl;
    int s = sum(&a,&b);
    cout<<"Sum is :"<<s<<endl;
    return 0;
}
int sum(int *x, int *y){
    cout<<x<<endl;
    cout<<*x<<endl;
    cout<<&x<<endl;
    return(*x+*y);
}
