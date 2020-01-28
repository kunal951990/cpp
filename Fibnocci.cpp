#include<iostream>
using namespace std;
void fibnocci(int x);
int fib(int y);
int main()
{
    fibnocci(10);
    cout<<endl;
    cout<<fib(5);
    cout<<endl;
    for(int s=0;s<=10;s++)
        cout<<fib(s)<<" ";
    return 0;
}
void fibnocci(int n)
{
    int i=0;
    int sum=0;
    int first=0;
    int second=1;

    cout<<second<<" ";
    for(i=0;i<n;i++)
    {
        sum=first+second;
        cout<<sum<<" ";
        first=second;
        second=sum;
    }
}

int fib(int m)
{
    if(m==0 || m==1)
        return (1);
    return (fib(m-1)+fib(m-2));
}
