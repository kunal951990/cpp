#include<iostream>
#include<tuple>
using namespace std;

int main()
{
    tuple <string,string,int> t1;
    tuple <int,int> t2;

    t1=make_tuple("ABC","DEF",25); // make_tuple(item, item, ....) add items to tuple.

    cout<<get<0>(t1)<<endl; // get<index>(tuple) will give item.
    cout<<get<1>(t1)<<endl;
    cout<<get<2>(t1)<<endl;
    return 0;
}
