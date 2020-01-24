#include<iostream>
using namespace std;

template <class X>
X big(X a, X b){
    if (a>b)
        return(a);
    else
        return(b);
}

/*
int big(int x, int y){
    if (x>y)
        return(x);
    else
        return(y);
}*/

int main(){
    big(3,5);
    big(5.6,5.8);
    return 0;
}
