#include<iostream>
using namespace std;

int fact(int);
int main()
{
    int num;
    num=fact(5);
    cout<<num<<endl;
    return 0;
}

int fact(int n)
{
    if (n==0||n==1)
        return (1);
    return (fact(n-1)*n);
}
