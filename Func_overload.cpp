#include<iostream>
using namespace std;
int fun(int a);
int fun(float b);
int main()
{
    cout<<fun(5)<<endl;
    cout<<fun(6.6)<<endl;
    return 0;
}

int fun(int a){return a*2.1;}
int fun(float b){return b*2;}
