#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int i=0;
    vector <int> v1{10,20,30,40,50};
    for (i=0;i<=5;i++)
        cout<<v1[i]<<" ";
    cout<<"\n.........................................."<<endl;

    vector <int> v3(5,10);
    for (i=0;i<=4;i++)
        cout<<v3[i]<<" ";
    cout<<".........................................."<<endl;
    vector <string> v4 = {"Payal","Ladli","Mounika"};
    for (i=0;i<=2;i++)
        cout<<v4[i]<<" ";
    cout<<".........................................."<<endl;
    cout<<v1.capacity()<<endl; // vector.capacity() will give the capacity of vector.
    cout<<v1.size()<<endl;
    cout<<".........................................."<<endl;

    vector <char> v2;
    cout<<v2.size()<<endl;cout<<v2.capacity()<<endl;
    v2.push_back('k');
    cout<<v2[0]<<endl;
    cout<<v2.capacity()<<endl;
    v2.push_back('u');              // vector.push_back(item), will add item like stack.
    cout<<v2[1]<<endl;
    cout<<v2.capacity()<<endl;
    v2.push_back('n');              // vector.pop_back(), will remove item from last.
    cout<<v2[2]<<endl;
    cout<<v2.capacity()<<endl;
    v2.pop_back();
    cout<<v2[2]<<endl;
    v2.pop_back();
    cout<<v2[2]<<v2.capacity()<<endl;
    return 0;
}
