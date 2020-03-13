// sum of number of cubes

#include<iostream>
using namespace std;

int sumofCubes(int a,int b);

int main()
{
    cout<<sumofCubes(1,2);
    return 0;
}

int sumofCubes(int a,int b)
{
    if(b>=a)
    {
        return(sumofCubes(a,b-1)+(b*b*b));
    }
}
